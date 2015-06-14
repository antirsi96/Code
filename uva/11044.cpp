#include <bits/stdc++.h>

using namespace std;

int main() 
{
    long long T, N, M;
    for(cin >> T; T > 0; T--) {
        cin >> N >> M;
        cout << (N / 3) * (M / 3) << endl;
    }
}
