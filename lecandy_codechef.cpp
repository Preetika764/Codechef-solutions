#include <iostream>
using namespace std;
void fx(void);

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
      fx();
    }
    return 0;
}

void fx(void)
{
    int n,i;
    long long int c, s =0;
    cin >> n >> c;
        int arr[n];
        for( i = 0; i < n; i++)
        {
            cin >> arr[i];
            s+=arr[i];
        }
        if(s <= c)
            cout << "Yes";
        else
            cout << "No";
    }




