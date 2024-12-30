#include<bits/stdc++.h>
using namespace std;

bool isSorted(vector<int> a , int i)
{
    if(i==a.size()-1)
    return true;

    if(a[i]>a[i+1])
    return false;

    return isSorted(a,i+1);


}

int main()
{

    int n;
    cin>>n;
    vector<int> a(n);

    for(int i=0 ; i<n ; i++)
    {
        cin>>a[i];
    }

    if(isSorted(a,0))
    cout<<"YES";
    else
    cout<<"NO";




}