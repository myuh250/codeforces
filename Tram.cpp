//   116A
#include<iostream>

using namespace std;

int main(){
    int n;
    int a[1000], b[1000];
    int max;
    int total = 0;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }
    
    max = b[0];
    total = b[0];
    for (int i = 1; i < n; i++) {
        total = total - a[i] + b[i];
        if (total > max) max = total;
    }

    cout << max;
}