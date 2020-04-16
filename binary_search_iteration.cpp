#include <iostream>
using namespace std;

binary_search_iteration(int arr[],int low, int high, int key)
{
    do
    {
      int mid = low + (high - low)/2;
      if(arr[mid]>key)
        high = mid-1;
      else if (arr[mid]<key)
        low = mid+1;
      else return mid;
    }
    while(low<=high);
    return -1;
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    int key = 378;
    cout << binary_search_iteration(arr, 0, 4, key);
    return 0;
}
