#include <bits/stdc++.h>
using namespace std;

int main() {
    int C;
    int len;
    int width;

    while (true) {
        cin >> C;
        if (C == 0) break;

        len = floor(sqrt(C));
        while (true) {
            if (C % len == 0) {
                width = C/len;
                cout << "Minimum perimeter is " << 2 * (len + width) << " with dimensions " << len << " x " << width << endl;
                break;
            }
            len--;
        }
    }

    return 0;
}
