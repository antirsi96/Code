#include <bits/stdc++.h>

using namespace std;

int a[111111], dp[111111][2];
int n, ans;

int main() {
  cin >> n;
  for (int i = 1; i <= n; i++)
    cin >> a[i];
  for(int i = 1; i <= n; i++)
    if(a[i] > a[i - 1]) dp[i][0] = dp[i - 1][0] + 1;
    else dp[i][0] = 1;
  for(int i = n; i >= 1; i--)
    if(a[i] < a[i + 1]) dp[i][1] = dp[i + 1][1] + 1;
    else dp[i][1] = 1;
  for(int i = 1; i <= n; i++) {
    ans = max(ans, max(dp[i - 1][0] + 1, dp[i + 1][1] + 1));
    if(a[i - 1] + 1 < a[i + 1])
      ans = max(ans, dp[i - 1][0] + dp[i + 1][1] + 1);
  }
  cout << ans << endl;
}
