#include <bits/stdc++.h> 
using namespace std;

int main() {
    int A, B, C;
    cin >> A;
    cin >> B;
    cin >> C;

    int maxwater = C;
    int remain = maxwater;
    int m = max(A, B);
    int s = min(A, B);
    while ( true ) {
        while ( remain % s != 0 and remain >= 0 ) {
            remain -= m;
        }
        if ( remain < 0 ) {
            maxwater -= 1;
            remain = maxwater;
        } else {
            cout << maxwater << endl;
            return 0;
        }
    }

    return 0;
}