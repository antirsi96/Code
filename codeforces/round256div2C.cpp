#include <bits/stdc++.h>

using namespace std;

int a[111111], n;

int solve(int left, int right, int up) {
    if (left >= right) return 0;
    int best = -1;
    for (int i = left; i < right; i++)
        if (best < 0 || a[i] < a[best]) best = i;
    return min(right - left, solve(left, best, a[best]) + solve(best + 1, right, a[best]) + a[best] - up);
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << solve(0, n, 0) << endl;
}
