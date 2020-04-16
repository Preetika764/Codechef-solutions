#include <cstring>
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n,k,flag = 0, a;
    cin >> n >> k;
    //n is no. of words and k is no. of phrases
    char dict[n][6];
    //storing words in the dictionary
    for(int i = 0; i < n; i++)
    {
        cin >> dict[i];
    }
    //inputting the phrases
    char p[k][50][5];
    int g[k];
    for(int i = 0; i < k; i++)
    {
       cin >> g[i]; //number of words in a phrase
       for(int i = 0; i < a; i++)
       {
           cin >> p[k][i];
       }

    }

    for(int p = 0; p < n; p++)
    {
        for(int i = 0; i < k; i++)
        {
            for(int j = 0; j < g[i]; j++)
            {
                if(strcmp(dict[p], p[i][j])==0)
                    flag = 1;
            }
        }
        if(flag==1)
            cout << "YES";
        else
            cout << "NO";
    }

}

