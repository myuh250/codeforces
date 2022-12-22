// 281A
#include<iostream>
#include<string.h>

using namespace std;

int main() {
    string str;
    cin >> str;

    if (str[0] >= 97 && str[0] <= 122) {
        str[0] -= 32;
    }

    for (int i = 0; i < str.size(); i++) {
        cout << str[i];
    }
}