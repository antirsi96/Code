#include <bits/stdc++.h>

using namespace std;

int A[100][100], N;
int good[100];

int main() {
    scanf("%d", &N);
    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            scanf("%d", &A[i][j]);
    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            if(A[i][j] == 1) good[i]++;
            else if(A[i][j] == 2) good[j]++;
            else if(A[i][j] == 3) good[i]++, good[j]++;
    int ans = 0;
    for(int i = 0; i < N; i++)
        if(good[i] == 0) ans++;
    cout << ans << endl;
    for(int i = 0; i < N; i++)
        if(good[i] == 0)
            cout << i + 1 << " ";
    cout << endl;
}
