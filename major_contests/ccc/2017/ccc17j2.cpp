#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, k;
    cin >> N;
    cin >> k;

    int sum = 0;
    for (int i = 0; i < k+1; i++) {
        sum += N * pow(10, i);
    }

    cout << sum << endl;

    return 0;
}
