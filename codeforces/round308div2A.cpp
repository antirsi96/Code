#include <bits/stdc++.h>
using namespace std;

#define rep(i, from, to) for (int i = from; i < int(to); ++i)
#define trav(a, x) for (auto &a : x)
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int A[101][101], N, ans;

int main() {
	cin >> N;
	rep(t, 0, N) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		rep(i, x1, x2 + 1) rep(j, y1, y2 + 1)
			A[i][j]++;
	}
	rep(i, 1, 101) rep(j, 1, 101)
		ans += A[i][j];
	cout << ans << endl;
}
