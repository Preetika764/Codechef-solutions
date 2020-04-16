#include <iostream>
using namespace std;

int main()
{
    int n = 7;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];

    }
    int x = arr[0];
    for( int i = 1; i < n; i++)
    {

        x = (x^arr[i]);
    }
    cout << x;
    return 0;
}
