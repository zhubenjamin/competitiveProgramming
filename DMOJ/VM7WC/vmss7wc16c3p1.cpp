#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int largestX = 0;
    int largestY = 0;
    int smallestX = 1000;
    int smallestY = 1000;
    int X;
    int Y;
    for (int i = 0; i < N; i++) {
        cin >> X;
        cin >> Y;
        if (X > largestX) {
            largestX = X;
        }
        if (X < smallestX) {
            smallestX = X;
        }
        if (Y > largestY) {
            largestY = Y;
        }
        if (Y < smallestY) {
            smallestY = Y;
        }
    }

    cout << (largestX - smallestX) * (largestY - smallestY) << endl;

    return 0;
}