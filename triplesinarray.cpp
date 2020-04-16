#include <iostream>
#include <math.h>
using namespace std;

int main()
{
int n = 7,s = 0;
int arr[n];
int binary[32] = {0};
//int brr[32] = {0};
for(int i = 0; i < n; i++)
    {
     cin >> arr[i];
     for(int j = 0; j < 32; j++)
        {
           binary[j] += (arr[i]&1);
           arr[i]>>= 1;

        }

    }
for(int j = 0; j < 32; j++)
{
binary[j]%=3;
}
for(int j = 0; j < 32; j++)
{
s+= pow(2,j)*binary[j];
}

cout << s;

return 0;
}
