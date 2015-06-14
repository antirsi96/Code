#include <bits/stdc++.h>
using namespace std;

struct node {
    int key;
    node* left;
    node* right;
};

class btree {
public:
    btree();
    ~btree();

    void insert(int key);
    node *search(int key);
    void destroy_tree();

private:
    void destroy_tree(node* leaf);
    void insert(int key, node* leaf);
    node* search(int key, node* leaf);

    node* root;
};

btree::btree() {
    root = nullptr;
}

btree::~btree() {
    destroy_tree();
}

void btree::destroy_tree(node* leaf) {
    if(leaf != nullptr) {
	cout << leaf->key << endl;
	destroy_tree(leaf->left);
	destroy_tree(leaf->right);
	delete leaf;
    }
}

void btree::insert(int key, node* leaf) {
    if(key < leaf->key) {
	if(leaf->left != nullptr)
	    insert(key, leaf->left);
	else {
	    leaf->left = new node;
	    leaf->left->key = key;
	    leaf->left->left = leaf->left->right = nullptr;
	}
    }
    else if(key >= leaf->key) {
	if(leaf->right != nullptr)
	    insert(key, leaf->right);
	else {
	    leaf->right = new node;
	    leaf->right->key = key;
	    leaf->right->right = leaf->right->left = nullptr;
	}
    }
}

node* btree::search(int key, node* leaf) {
    if(leaf != nullptr) {
	if(leaf->key == key)
	    return leaf;
	else if(key < leaf->key)
	    return search(key, leaf->left);
	else return search(key, leaf->right);
    }
    else return nullptr;
}

void btree::insert(int key) {
    if(root != nullptr)
	insert(key, root);
    else {
	root = new node;
	root->key = key;
	root->left = root->right = nullptr;
    }
}

node* btree::search(int key) {
    return search(key, root);
}

void btree::destroy_tree() {
    destroy_tree(root);
}

int main() {
    btree tree;
    srand(time(0));
    int n = rand() % 10000;
    for(int i = 0; i < n; i++)
	tree.insert(rand() % 100);
    tree.destroy_tree();
}
