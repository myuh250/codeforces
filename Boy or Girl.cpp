// 236A
#include<iostream>
#include<string.h>
#include<algorithm>

using namespace std;

int main() {
    bool isGirl = true;
    int count = 0;
    string str;
    cin >> str;
    sort(str.begin(), str.end());
    for(int i = 0; i < str.size() - 1; i++) {
        if (str[i] != str[i + 1]) {
            ++count;
        }
    }

    if ((count + 1) % 2 == 0) isGirl = true;
    else isGirl = false;

    if (isGirl) cout << "CHAT WITH HER!";
    else cout << "IGNORE HIM!";
}