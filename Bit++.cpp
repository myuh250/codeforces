// 282A
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    int x = 0;
    string statement;

    cin >> n;

    while (n--)
    {
        cin >> statement;
        if (statement[1] == '+')
        {
            ++x;
        }
        else if (statement[1] == '-')
        {
            --x;
        }
    }

    cout << x;
}