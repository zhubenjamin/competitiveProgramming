#include <bits/stdc++.h> 
using namespace std;

int main() {
    int N;
    unordered_map<string, int> shu = {
        {"Poblano", 1500},
        {"Mirasol", 6000},
        {"Serrano", 15500},
        {"Cayenne", 40000},
        {"Thai", 75000},
        {"Habanero", 125000}
    };
    cin >> N;
    
    string pepper;
    int spiciness = 0;
    for (int i = 0; i < N; i++) {
        cin >> pepper;
        spiciness += shu[pepper];
    }
    cout << spiciness << endl;

    return 0;
}
