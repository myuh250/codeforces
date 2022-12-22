// 266a
#include<iostream>
#include<string.h>

using namespace std;

int main() {
    int n;
    int count;
    string s;

    cin >> n;
    do {
        cin >> s;
    } while (s.size() != n);
    
    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1]) {
            ++count;
            // for (int j = i; j < n; j++) {
            //     s[i - 1] = s[i];
            // }
            // --n;
        }
    }
    cout << count;
}
