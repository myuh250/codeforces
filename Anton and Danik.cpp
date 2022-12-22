// 734A
#include<iostream>
#include<string.h>

using namespace std;

int main() {
    int n;
    int Anton = 0, Danik = 0;
    string s;

    cin >> n;
    do {
        cin >> s;
    } while (s.size() != n);

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'A') ++Anton;
        else if (s[i] == 'D') ++ Danik;
    }

    if (Anton > Danik) cout << "Anton";
    else if (Anton < Danik) cout << "Danik";
    else cout << "Friendship";
}