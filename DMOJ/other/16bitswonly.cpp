#include <bits/stdc++.h>
using namespace std;

int N;
long long A;
long long B;
long long P;

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> A;
        cin >> B;
        cin >> P;

        cout << (( A*B == P ) ? "POSSIBLE DOUBLE SIGMA" : "16 BIT S/W ONLY") << endl;
    }

    return 0;
}
