#include <bits/stdc++.h>
using namespace std;

int hamming(string s, string t) {
    int ans = 0;
    for(int i = 0; i < s.size(); i++)
        if(s[i] != t[i]) ans++;
    return ans;
}

int main() {
    string S, T, P;
    cin >> S >> T;
    if(hamming(S, T) == 0) {
        cout << S << endl;
        return 0;
    }
    if(hamming(S, T) % 2 == 1) {
        cout << "impossible" << endl;
        return 0;
    }
    bool flag = true;
    for(int i = 0; i < S.size(); i++)
        if(S[i] == T[i])
            P += S[i];
        else {
            if(flag) {
                P += S[i];
                flag = !flag;
            }
            else {
                P += T[i];
                flag = !flag;
            }
        }
    cout << P << endl;
    return 0;
}   
