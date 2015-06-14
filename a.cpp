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

int N;
vector<int> v;

int main() {
    cin >> N;
    string n = static_cast<ostringstream*>( &(ostringstream() << N) )->str();
    for(int i = 0; i < 9; i++) {
	int q = 0;
	for(int j = 0; j < n.size(); j++) {
	    q *= 10;
	    if(n[j] > '0' + i)
		q++;
	}
	if(q > 0)
	    v.push_back(q);
    }
    cout << *max_element(n.begin(), n.end()) << endl;
    for(auto i : v)
	cout << i << " ";
    cout << endl;
}

