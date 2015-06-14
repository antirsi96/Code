#include <bits/stdc++.h>

using namespace std;

#define MAX 100002

char A[MAX], B[MAX], C[MAX];
int a[26], b[26], c[26];

void q(char *s, int f[])
{
    for(; *s != '\0'; s++)
        f[*s - 'a']++;
}

int main()
{
    cin >> A >> B >> C;
    q(A, a); q(B, b); q(C, c);
    int best = 0, mx = -1;
    bool flag = true;
    for(int i = 0;; i++)
    {
        int mn = 0x3f3f3f3f;
        for(int j = 0; j < 26; j++)
        {
            if(i * b[j] > a[j]) flag = false;
            if(c[j]) mn = min(mn, (a[j] - i * b[j]) / c[j]);
        }
        if(!flag) break;
        if(mn + i > mx)
        {
            mx = mn + i;
            best = i;
        }
    }
    for(int i = 0; i < best; i++)
        cout << B;
    for(int i = 0; i < mx - best; i++)
        cout << C;
    for(int i = 0; i < 26; i++) 
    {
        a[i] -= best * b[i] + c[i] * (mx - best);
        for(int j = 0; j < a[i]; j++)
            cout << (char)(i + 'a');
    }
    cout << endl;
}
