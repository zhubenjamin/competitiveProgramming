#include <bits/stdc++.h>
using namespace std;

int main() {
    int T, N;
    cin >> T;
    cin >> N;

    unordered_map<char, bool> letters;
    string str;
    char letter;

    for (int i = 0; i < T; i++) {
        str = "";
        letters.clear();
        for (int j = 0; j < N; j++) {
            cin >> letter;
            str += letter;
            if (letters.contains(letter)) {
                letters[letter] = true;
            } else {
                letters.emplace(letter, false);
            }
        }

        int prev = !letters[str[0]];
        bool alternates = true;
        for (int j = 0; j < N; j++) {
            if (letters[str[j]] ^ prev) {
                prev = letters[str[j]];
            } else {
                cout << "F" << endl;
                alternates = false;
                break;
            }
        }
        if (alternates) {
            cout << "T" << endl;
        }

    }

    return 0;
}
