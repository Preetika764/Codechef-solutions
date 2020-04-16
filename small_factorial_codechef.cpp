#include <iostream>

using namespace std;
int multiply(int arr[],int y, int i);
//i is the number of digits already present
//y is the number you want to multiply with
void fact(int *arr, int x);

int main()
{
  int arr[200] = {0};
  int brr[100];
  int t; //no. of testcases
  cin >> t;
  for(int i = 0; i < t; i++)
  {
    cin >> brr[i];
  }
  for(int i = 0; i < t; i++)
  {
      arr[0] = 1;
      fact(arr, brr[i]);
  }

}

void fact(int *arr, int x)
{
    int n = 1;
   for(int i = 2; i <= x; i++)
  {
    n = multiply(arr, i, n);

  }
  for(int j = n-1; j >= 0; j--)
    {
        cout << arr[j];
    }
    cout << '\n';
}



int multiply(int *arr,int y, int i)
{
    int carry = 0;
    int k = 0, h;


    for(int j = 0; j < i; j++)
    {
        int temp = (y * arr[j]) + carry;
        arr[k++] = temp%10;
        carry = temp/10;
    }
    while(carry!=0)
    {
        arr[k++] = carry%10;
        carry/=10;
    }

return k;
}
