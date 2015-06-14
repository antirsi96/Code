#include <bits/stdc++.h>
using namespace std;

int f(int A[], int N, int M) {
    int ans = 0;
    for(int i = 0; i < N; i++)
        if(A[i] > M)
            ans++;
    return ans;
}

int main() 
{
    int N, A[2000];
    scanf("%d", &N);
    for(int i = 0; i < N; i++)
        scanf("%d", A + i);
    for(int i = 0; i < N; i++)
        printf((i == N - 1) ? "%d\n" : "%d ", f(A, N, A[i]) + 1);
}
