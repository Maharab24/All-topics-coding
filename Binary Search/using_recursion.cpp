#include<bits/stdc++.h>
using namespace std; 

bool binary ( int arr[], int high , int low , int key)
{ 

  if(low > high)
  {
    return false ; 
  }
  int mid=(low+high)/2; 
  if(arr[mid]==key)
  {
    return true ; 
  }



  if(arr[mid]>key)
  binary(arr, mid-1, low , key); 
  else 
  binary (arr, high, mid+1, key);


   
}

int main()
{
  int  arr[]={1,2,3,4,5,6,7}; 
  int key=9; 

  if(binary(arr,6, 0, key))
  cout<<"YES"<<endl; 
  else 
  cout<<"NO"<<endl; 

}