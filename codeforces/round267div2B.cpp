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

int n, m, k, ans;
int A[12345];

int main() {
    cin >> n >> m >> k;
    rep(i, 0, m + 1) cin >> A[i];
    rep(i, 0, m) {
	int num = A[i] ^ A[m], diff = 0;
	for(int j = 0; j < n; j++, num >>= 1)
	    if(num & 1) diff++;
	if(diff <= k) ans++;
    }
    cout << ans << endl;
}

