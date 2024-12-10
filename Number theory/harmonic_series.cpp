#include<bits/stdc++.h>
using namespace std;

// count divisor of a number

const int mx=1e6;

int cnt[mx];

int main()
{

    for(int i=1; i<=mx; i++)
    {
        for(int j=i; j<=mx; j+=i)
        {
            cnt[j]++; 
        }
    }

}