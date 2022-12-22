// 59A
#include<iostream>
#include<string.h>

using namespace std;

int main() {
    string s;
    int up = 0, down = 0;

    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 65 && s[i] <= 90) {
            ++up;
        } else if (s[i] >= 97 && s[i] <= 122) {
            ++down;
        }
    }

    if (up > down) {
        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= 97 && s[i] <= 122) {
                s[i] -= 32;
            }
        }
    } else if (up <= down) {
        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= 65 && s[i] <= 90) {
                s[i] += 32;
            }
        }
    }

    for (int i = 0; i < s.size(); i++) {
        cout << s[i];
    }
}