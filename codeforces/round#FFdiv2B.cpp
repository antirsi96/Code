#include <bits/stdc++.h>

using namespace std;

char s[1111];
int k, t, ans, f[26];

int main() {
  scanf("%s%d", s, &k);
  for (int i = 0; i < 26; i++) {
    scanf("%d", &t);
    f[i] = t;
  }
  for (int i = 0; s[i]; i++)
    ans += (i + 1) * f[s[i] - 'a'];
  int ma = numeric_limits<int>::min();
  for (int i = 0; i < 26; i++)
    ma = max(ma, f[i]);
  int start = strlen(s) + 1;
  int end = strlen(s) + k;
  for (int i = start; i <= end; i++)
    ans += i * ma;
  printf("%d\n", ans);
}
