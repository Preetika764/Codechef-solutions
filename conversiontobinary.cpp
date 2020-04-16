#include <iostream>
using namespace std;

int main()
{
int n;
cin >> n;
int arr[10], i = 0;
for(;n>0;n/=2)
{
arr[i++] = n%2;
}
//i is the number of elements stored in array

for(int j = i - 1; j >=0; j-- )
{
cout << arr[j];
}
return 0;
}
