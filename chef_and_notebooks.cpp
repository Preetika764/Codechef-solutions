#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    assert(t>=1 && t<=100000);
    while(t--)
    {
        int x,y,k,n,flag = 0;
        cin >> x >> y >> k >> n;
        assert(y<x);
        assert(y>=1 && y<=1000);
        assert(x>1 && x<=1000);
        assert(k>=1&& k<=1000);
        assert(n>=1&&n<=100000);

        int p,c;
        for(int i = 0; i < n; i++)
        {
            cin >> p >> c;
            assert(p>=1&&p<=1000);
            assert(c>=1&&c<=1000);
            if((p>=(x-y))&&(k>=c))
            {
               flag = 1;
               break;
            }
        }
        if(flag==1)
            cout << "Lucky chef" << ' ';
        else cout << "Unlucky chef" << ' ';
        flag = 0;


    }

    return 0;
}
