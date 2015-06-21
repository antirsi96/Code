#include <bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f
#define INFL 0x3f3f3f3f3f3f3f3fLL
#define rep(i, a, b) for(int i = (a); i < int(b); ++i)
#define rrep(i, a, b) for(int i = (a) - 1; i >= int(b); --i)
#define what_is(x) cerr << #x << " is " << x << endl;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vpii;

int N, M, ans;
char A[100][100];

int main() {
    cin >> N >> M;
    rep(i, 0, N) rep(j, 0, M) cin >> A[i][j];
    rep(i, 1, N) rep(j, 1, M) {
	int f[26] = {};
	f[A[i][j] - 'a']++, f[A[i - 1][j - 1] - 'a']++;
	f[A[i - 1][j] - 'a']++, f[A[i][j - 1] - 'a']++;
	if(f['f' - 'a'] && f['a' - 'a'] && f['c' - 'a'] && f['e' - 'a'])
	    ans++;
    }
    cout << ans << endl;
}

