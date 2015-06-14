#include <bits/stdc++.h>

using namespace std;

int main() 
{
    long long T, A, B;
    for(cin >> T; T > 0; T--) {
        cin >> A >> B;
        if(A < B) cout << "<" << endl;
        else if(A > B) cout << ">" << endl;
        else cout << "=" << endl;
    }
}
