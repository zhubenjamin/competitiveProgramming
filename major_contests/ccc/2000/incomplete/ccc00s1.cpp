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
    int nextwin;
    while (true) {
        nextwin = min({m1left, m2left, m3left});
        if ( nextwin > qleft ) {
            cout << "Martha plays " << p+qleft << " times before going broke." << endl;
            return 0;
        } else {
            qleft -= nextwin;
            p += nextwin;
            if ( nextwin == m1left ) {
                m1left = 35;
                m2left -= nextwin;
                m3left -= nextwin;
                qleft += 30;
            } else if ( nextwin == m2left ) {
                m2left = 100;
                m1left -= nextwin;
                m3left -= nextwin;
                qleft += 60;
            } else {
                m3left = 10;
                m1left -= nextwin;
                m2left -= nextwin;
                qleft += 9;
            }
            cout << "qleft = " << qleft << "; m1left = " << m1left << "; m2left = " << m2left << "; m3left = " << m3left << "; nextwin = " << nextwin << "; p = " << p << endl;
        }
    }
}
