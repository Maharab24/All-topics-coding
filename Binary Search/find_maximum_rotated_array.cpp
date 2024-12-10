#include<bits/stdc++.h>
using namespace std;

int find_maxi (int *arr, int n)
{
    int l=0;
    int h=n-1;
    int ans=INT_MIN;

    while(l<=h)
    {
        int mid=(l+h)/2;

        if(arr[mid]>=arr[l])
        {
            ans=max(ans,arr[mid]);
            l=mid+1 ;
        }
        else
        {
            ans=max(ans, arr[l]);
            h=mid-1;
        }
    }

    return ans;
}

int main()
{
    int arr[]={4,5,6,7,0,1,2};
    cout<<find_maxi(arr, 7);
}