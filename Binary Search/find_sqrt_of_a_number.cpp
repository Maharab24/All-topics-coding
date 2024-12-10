#include<bits/stdc++.h>
using namespace std;

int find_sqrt(int arr, int n)

{
    int l =0 ;
    int h=n-1;
    int ans;
    while(l<=h)
    {
        int mid  = (l+h)/2;

        if(mid*mid<=arr)
        {
            ans=mid;
            l=mid+1;
        }
        else
        h=mid-1;
    }

    return ans; 
}