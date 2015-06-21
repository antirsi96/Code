#include <bits/stdc++.h>
using namespace std;

#define rep(i, from, to) for (auto i = from; i < int(to); ++i)
#define trav(a, x) for (auto &a : x)
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

ll N, ans;

int main() {
	cin >> N;
	for(ll d = 1, e = 1; d <= N; d *= 10, e++) {
		ll ma = min(d * 10 - 1, N);
		ans += e * (ma - d + 1);
	}
	cout << ans << endl;
}
