#include <iostream>
#include <cmath>
using namespace std;

void rev(int x);

int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++)
	{
	    int x;
	    cin >> x;
	    rev(x);
	}
	return 0;
}

void rev(int x)
{
    int n = 0, y = 0, t =x;
    while(t>0)
    {
      t/=10;
      n++;
    }

    int arr[n];
    for(int i = 0; i < n; i++)
    {
        arr[i] = x%10;
        x/=10;
    }


    for(int i = 0; i < n; i++)
    {
        y = y + ((pow(10,n-i-1))* arr[i]);
        //cout << '\n' << y;
    }
  cout << '\n' << y;




}
