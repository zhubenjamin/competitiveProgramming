#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int X;
    cin >> X;
    
    int oN = N & 1; 
    int oX = X & 1;
    if ( oN^oX ) { // oN XOR oX (N and X have opposite polarities)
        cout << "-1" << endl;
        return 0;
    }

    for (int i = 0; i < X; i++) {
        if ( i > 0 ) { cout << " "; }
        cout << 0;
    }

    if ( X != 0 && N != X ) {
        cout << " ";
    }

    bool state = true;
    for (int i = 0; i < N-X; i++) {
        if ( i > 0 ) { cout << " "; }
        cout << state;
        state = !state;
    }

    cout << endl;

    return 0;
}
