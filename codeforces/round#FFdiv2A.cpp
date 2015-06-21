#include <bits/stdc++.h>
using namespace std;

#define rep(i, from, to) for (int i = from; i < int(to); ++i)
#define trav(a, x) for (auto &a : x)
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int P, N, F[1111];

int main() {
	cin >> P >> N;
	rep(i, 0, N) {
		int t; cin >> t;
		if(F[t % P]) {
			cout << i + 1 << endl;
			return 0;
		}
		else F[t % P]++;
	}
	cout << -1 << endl;
}
