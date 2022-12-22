// 546A
#include<iostream>

using namespace std;

int main() {
    int n, w, k;
    int sum = 0;
    do
    {
        cin >> k >> n >> w;
    } while (k < 1 || w < 1 || k > 1000 || w > 1000 || n < 0);

    for (int i = 1; i <= w; i++) {
        sum += i*k;
    }
    
    if (n >= sum) cout << "0";
    else cout << sum - n;
}