//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
//#define INF 0x3f3f3f3f
#//define INFL 0x3f3f3f3f3f3f3f3fLL
#define rep(i, a, b) for(int i = (a); i < int(b); ++i)
//#define rrep(i, a, b) for(int i = (a) - 1; i >= int(b); --i)
//#define what_is(x) cerr << #x << " is " << x << endl;
//typedef long long ll;
//typedef pair<int, int> pii;
//typedef vector<int> vi;
//typedef vector<pii> vpii;

int N, M, A[20][20];
int ans, ARR[20];

int sum() {
    int best = 0, sum = 0;
    rep(i, 0, N) {
	sum = 0;
	rep(j, 0, M)
	    sum += A[i][j] * ARR[j];
	best += max(sum, -sum);
    }
    return best;
}

void solve(int k) {
    if(k == M) {
        ans = max(ans, sum());
	return;
    }
    ARR[k] = 1;
    solve(k + 1);
    ARR[k] = -1;
    solve(k + 1);
}

int main() {
    freopen("flip.in", "r", stdin);
    freopen("flip.out", "w", stdout);
    cin >> N >> M;
    rep(i, 0, N) rep(j, 0, M) cin >> A[i][j];
    solve(0);
    cout << ans << endl;
}
