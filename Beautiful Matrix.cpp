// 263A
#include<iostream>
#include<math.h>

using namespace std;

int main() {
    int num = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> num;
            if (num == 1) {
                cout << abs(i - 3) + abs(j - 3);
            }
        }
    }
    return 0;
}