// 339A
#include<iostream>
#include<string.h>
#include<algorithm>

using namespace std;

int main() {
    string str;
    string newstr;
    cin >> str;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] != '+') {
            newstr.push_back(str[i]);
        }
    }
    sort(newstr.begin(), newstr.end());
    cout << newstr[0];
    for (int i = 1; i < newstr.size(); i++) {
        cout << "+" << newstr[i];
    }
    
}