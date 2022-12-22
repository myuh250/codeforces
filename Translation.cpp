// 41A
#include<iostream>
#include<string.h>
#include<algorithm>

using namespace std;

int main() {
    string s, s2;

    cin >> s >> s2;
    reverse(s2.begin(), s2.end());
  
    if (s == s2) cout << "YES";
    else cout << "NO";
}