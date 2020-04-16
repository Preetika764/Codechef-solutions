#include <iostream>
#include <cstring>

using namespace std;

void sieveoferatosthenes(int n)
{
    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for(int p = 2; p <=n ; p++)
    {

     if(prime[p]==true)
     {
         for(int j = p*p; j <=n; j+=p)
            prime[j] = false;

     }


    }

    for(int i = 2; i <=n; i++)
    {

        if(prime[i]==true)
            cout << i << "\n";
    }

}


int main()
{

    sieveoferatosthenes(23);
    return 0;
}

