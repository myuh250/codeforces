// 791A
#include<iostream>

using namespace std;

int main() {
    int a, b;
    int year = 0;
    do
    {
        cin >> a >> b;
    } while (a > b || b > 10 || a < 1);
    
    while (a <= b) {
        ++year;
        a *= 3;
        b *= 2;
    }

    cout << year;
}