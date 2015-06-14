#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int T;
    cin >> T;
    for(int _ = 0; _ < T; _++)
    {
        int A[3];
        cin >> A[0] >> A[1] >> A[2];
        sort(A, A + 3);
        cout << "Case " << _ + 1 << ": " << A[1] << endl;
    }
}
