#include<bits/stdc++.h>
using namespace std;

void search_rotated(int *arr, int n, int target)
{
    int l = 0  ;
    int h=n-1 ;

    while(l<=h)
    {
        int mid=(l+h)/2;

        if(arr[mid]==target)
        {
            cout<<"Found"<<endl;
            return;
        }

        if(arr[mid]>target)
        {
            if(arr[l]<=target && arr[mid]>=target)
            {
                h=mid-1;
            }
            else
            l=mid+1;
        }
        else
        {
            if(arr[h]>=target && arr[mid]<=target)
            {
                l=mid+1;
            }
            else
            h=mid-1;
        }

    }
    cout<<"Not found"<<endl;
}

int main()
{
    int arr[]={12,13,14,15,1,2,3};
    search_rotated(arr, 7,13);

}