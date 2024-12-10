#include<bits/stdc++.h>
using namespace std; 

void printSub(int index,vector<int> &v, int arr[], int n)
{ 
  if(index==n)
  {
    for(auto u: v)
      cout<<u<<" "; 

    if(v.size()==0)
      cout<<"{}"; 

    cout<<endl; 
    return;
  }
   
  v.push_back(arr[index]);
  printSub(index+1,v,arr,n);
  v.pop_back();

  printSub(index+1,v,arr,n);



}


int main()
{
  int arr[]={3,1,2}; 

  int n =3; 

  vector<int> v; 

  printSub(0,v,arr,n);

}