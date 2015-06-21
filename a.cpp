#include <bits/stdc++.h>

using namespace std;

char s[111], t[111];
int f[26], ff[26];
bool autom = false, arr = false;

int main() {
  cin >> s >> t;
  for (int i = 0; s[i]; i++)
    f[s[i] - 'a']++;
  for (int i = 0; t[i]; i++)
    ff[t[i] - 'a']++;
  for (int i = 0; t[i]; i++)
    if (ff[t[i] - 'a'] > f[t[i] - 'a']) {
      cout << "need tree" << endl;
      return 0;
    }
  char nn[111];
  int k = 0;
  for (int i = 0; s[i]; i++)
    if (ff[s[i] - 'a'] > 0)
      nn[k++] = s[i], ff[s[i] - 'a']--;
    else autom = true;
  nn[k] = '\0';
  if (strcmp(nn, t)) arr = true;
  if (arr && autom) cout << "both" << endl;
  else if (arr && !autom) cout << "array" << endl;
  else cout << "automaton" << endl;
}
