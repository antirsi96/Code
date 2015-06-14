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

int N, K;
char A[111][111];

int main() {
    cin >> N >> K;
    if (N % 2 == 0) {
	int num = (N * N) / 2;
	if(K > num) {
	    cout << "NO" << endl;
	    return 0;
	}
	else cout << "YES" << endl;
    }
    else if (N % 2 == 1) {
	int _numarimpar = (N + 1) / 2;
	int _numarpar = _numarimpar - 1;
	int _numar = N - 1;
	int _k = _numar / 2;
	int _total = _numarimpar * (_k + 1) + _numarpar * _k;
	if(_total < K) {
	    cout << "NO" << endl;
	    return 0;
	}
	else cout << "YES" << endl;
    }
    for (int i = 1; i <= N; i++)
	for (int j = 1; j <= N; j++) {
	    if (K > 0) {
		if (i % 2 == 1) {
		    if (j % 2 == 1)
			A[i][j] = 'L', K--;
		    else A[i][j] = 'S';
		}
		else if (i % 2 == 0) {
		    if (j % 2 == 0)
			A[i][j] = 'L', K--;
		    else A[i][j] = 'S';
		}
	    }
	    else A[i][j] = 'S';
	}
    for (int i = 1; i <= N; i++) {
	for (int j = 1; j <= N; j++)
	    cout << A[i][j];
	cout << "\n";
    }
    return 0;
}

