// Extremely inefficient solution to https://dmoj.ca/problem/ccc00s1

#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;
    int m1plays;
    cin >> m1plays;
    int m2plays;
    cin >> m2plays;
    int m3plays;
    cin >> m3plays;

    int qleft = q;
    int m1left = 35 - m1plays;
    int m2left = 100 - m2plays;
    int m3left = 10 - m3plays;

    int p = 0;
    while (qleft > 0) {
        if ( p % 3 == 0 ) {
            m1left -= 1;
            if ( m1left == 0 ) {
                m1left = 35;
                qleft += 30;
            }
        } else if ( p % 3 == 1 ) {
            m2left -= 1;
            if ( m2left == 0 ) {
                m1left = 100;
                qleft += 60;
            }
        } else {
            m3left -= 1;
            if ( m3left == 0 ) {
                m3left = 10;
                qleft += 9;
            }
        }
        p += 1;
        qleft -= 1;
    }

    cout << "Martha plays " << p << " times before going broke." << endl;
}
