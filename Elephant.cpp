// 617A
#include<iostream>

using namespace std;

int main() {
    int step = 0;
    int x;

    do {
        cin >> x;
    } while (x < 0);
    
    while (x > 0) {
        x -= 5;
        ++step;
    }

    cout << step;
}