// 112A

#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    string str1, str2;
    cin >> str1;
    cin >> str2;
    for (int i = 0; i < str1.size(); i++) {
        if (str1[i] < 92) {
            str1[i] += 32;
        }
        if (str2[i] < 92) {
            str2[i] += 32;
        }
    }
    if (str1 < str2) {
        cout << -1;
    } else if (str1 > str2) {
        cout << 1;
    } else if (str1 == str2) {
        cout << 0;
    }
}