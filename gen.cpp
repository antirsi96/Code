#include <bits/stdc++.h>
using namespace std;

#define rep(i, from, to) for (int i = from; i < int(to); ++i)
#define trav(a, x) for (auto &a : x)
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int xx[] = {-100, 100};
int yy[] = {-100, 100};

int main() {
	srand(time(0));
	int N = 2000;
	cout << N << endl;
	for(int i = 0; i < N; i++) {
		cout << xx[rand() % 2] << " " << yy[rand() % 2] << endl;
	}
	
}
