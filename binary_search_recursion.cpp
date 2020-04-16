#include <iostream>
using namespace std;

int binary_search_recursion(int arr[],int low,int high,int key)
{
int mid = low + (high-low)/2;
if(high == low)
    {
     if(arr[mid]==key)
        return low;
      else
        return -1;
    }

if(arr[mid]==key)
    {
     return mid;
    }
else if(arr[mid]>key)
return binary_search_recursion(arr, low, mid-1, key);
else
return binary_search_recursion(arr, mid+1, high, key);

}

int main()
{
    int arr[] = {1,2,8,9};
    int key = 2;
    int x = binary_search_recursion(arr,0, sizeof(arr)/sizeof(int)-1, key);
    cout << x;
    return 0;

}
