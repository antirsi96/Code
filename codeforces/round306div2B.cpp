#include <bits/stdc++.h>
#define INF  0x3f3f3f3f
#define INFL 0x3f3f3f3f3f3f3f3fLL
using namespace std;

int main() {
    int n, l, r, x, ans, a[100];
    cin >> n >> l >> r >> x;
    for(int i = 0; i < n; i++)
	cin >> a[i];
    
    ans = 0;

    for(int i = 0; i < (1 << n); i++) {
	int sum = 0, mi, ma;
	mi = INF;
	ma = -INF;
	for(int j = 0; j < n; j++)
	    if((i >> j) & 1) {
		mi = min(mi, a[j]);
		ma = max(ma, a[j]);
		sum += a[j];
	    }
	if(l <= sum && sum <= r && ma - mi >= x)
	    ans++;
    }
    cout << ans << endl;
}
