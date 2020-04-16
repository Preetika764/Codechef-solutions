#include <iostream>

using namespace std;

int trailingzeroes(int n)
{
    if(n<5)
        return 0;
    int ans = n/5 + trailingzeroes(n/5);
    return ans;

}

int main()
{

    int x;
    cin >> x;
    cout << trailingzeroes(x);
    return 0;
}
