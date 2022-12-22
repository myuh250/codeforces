// 231A
#include<iostream>

using namespace std;

int main()
{
    int n;
    do
    {
        cin >> n;
    } while (n < 1 || n > 1000);

    int Petya, Vasya, Tonya;
    int count = 0;
    while (n--)
    {
        cin >> Petya >> Vasya >> Tonya;
        if (Petya + Vasya + Tonya >= 2)
        {
            count += 1;
        }
    }
    
    cout << count << endl;
}