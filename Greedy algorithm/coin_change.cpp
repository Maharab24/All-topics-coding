#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;

    int coin[4]={1,5,10,25};

    int i=3;
    int cnt=0;
    while(n)
    {
        if(n>=coin[i])
        {
            n-=coin[i];
            cnt++;
            continue;
        }
        else
        i--;
    }

    cout<<cnt; 
}