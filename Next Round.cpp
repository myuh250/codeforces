// 158A
#include<iostream>

using namespace std;

int main()
{
    int n, k; 
    int count = 0;
    int arr[50];

    do
    {
        cin >> n >> k;
    } while (n < k && (n < 1 || n > 50 || k < 1 || k > 50));

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= arr[k - 1] && arr[i] != 0)
        {
            count += 1;
        }
    }
    
    cout << count;

    return 0;
}