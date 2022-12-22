// 977A
#include<iostream>

using namespace std;

int main() {
    int n, k;
    int temp = 0;
    cin >> n >> k;

    for (int i = 0; i < k; i++) {
        temp = n % 10;
        if (temp != 0) {
            n -= 1;
        } else {
            n /= 10;
        }
    }

    cout << n;
}