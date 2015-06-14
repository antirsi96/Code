#include <bits/stdc++.h>

using namespace std;

int A[12345], N, T;

void quicksort(int A[], int left, int right)
{
    if(left >= right) return;
    swap(A[left], A[(left + right) / 2]);
    int last = left;
    for(int i = left + 1; i <= right; i++)
        if(A[i] < A[left])
            swap(A[i], A[++last]);
    swap(A[left], A[last]);
    quicksort(A, left, last - 1);
    quicksort(A, last + 1, right);
}

int main() 
{  
    for(cin >> T; T > 0; T--) 
    {
        cin >> N;
        for(int i = 0; i < N; i++)
            cin >> A[i];
        quicksort(A, 0, N - 1);
        int sum = 0;
        for(int i = 1; i < N; i++)
            sum += A[i] - A[i - 1];
        sum += A[N - 1] - A[0];
        cout << sum << endl;
    }
}
