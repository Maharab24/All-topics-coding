#include<bits/stdc++.h>
using namespace std; 

void subsetSum(int index, int arr[], int s,vector<int> &ans,int n )
{
    if(index==n)
    {
        ans.push_back(s); 
        return;
    }

    s+=arr[index]; 
    subsetSum(index+1,arr,s,ans,n); 
    s-=arr[index]; 

    subsetSum(index+1, arr, s, ans, n); 
}

int main()
{
  int arr[]={3,1,2}; 

  vector<int> ans; 

  subsetSum(0,arr,0,ans,3); 

  for(auto u: ans)
  cout<<u<<" "; 
}

