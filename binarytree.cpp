#include <bits/stdc++.h>
using namespace std;

struct node {
    int key;
    node* left;
    node* right;
};

node *root = 0;

void destroy_tree(node* leaf) {
    if (leaf != 0) {
	printf("%d\n", leaf->key);
	destroy_tree(leaf->left);
	destroy_tree(leaf->right);
	free(leaf);
    }
}

void insert(int key, node** leaf) {
    if (*leaf == 0) {
	*leaf = (node*) malloc(sizeof(node));
	(*leaf)->right = (*leaf)->left = 0;
	(*leaf)->key = key;
    }
    else if (key < (*leaf)->key)
	insert(key, &(*leaf)->left);
    else insert(key, &(*leaf)->right);
}

node *search(int key, node* leaf) {
    if (leaf != 0) {
	if (key == leaf->key)
	    return leaf;
	else if(key < leaf->key)
	    return search(key, leaf->left);
	else return search(key, leaf->right);
    }
    return 0;
}

void print(node* leaf) {
    if (leaf != 0) {
	printf("%d\n", leaf->key);
	print(leaf->left);
	print(leaf->right);
    }
}

int main() {
    srand(time(0));
    int n = rand() % 10;
    for(int i = 0; i < n; i++)
	insert(rand() % 100, &root);
    print(root);
    puts("\n\n\n");
    destroy_tree(root);
    return 0;
}
