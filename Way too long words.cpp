// 71A
#include<iostream>

using namespace std;

int main()
{
    int n;
    do
    {
        cin >> n;
    } while (n < 1 || n > 100);
    

    for (int i = 0; i < n; i++)
    {
        string sentence;
        cin >> sentence;
        int len = sentence.size();
        if (len <= 10) {
            cout << sentence << endl;
        } else {
            cout << sentence[0] << len - 2 << sentence[len - 1] << endl;
        }
    }
    
}