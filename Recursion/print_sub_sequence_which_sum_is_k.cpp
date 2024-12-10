#include <bits/stdc++.h>
using namespace std;

void printS(int index, vector<int> &ds, int s, int k, int arr[], int n)
{
  if (index == n)
  {
    if (k == s)
    {
      for (auto u : ds)
        cout << u << " ";

      cout << endl;
    }
    return;
  }

  ds.push_back(arr[index]);
  s += arr[index];

  printS(index + 1, ds, s, k, arr, n);

  s -= arr[index];
  ds.pop_back();

  //  not pick
  printS(index + 1, ds, s, k, arr, n);
}

bool printS1(int index, vector<int> &ds, int s, int k, int arr[], int n)
{
  if (index == n)
  {
    if (k == s)
    {
      for (auto u : ds)
        cout << u << " ";

      cout << endl;

      return true;
    }
    return false;
  }

  ds.push_back(arr[index]);
  s += arr[index];

  if (printS1(index + 1, ds, s, k, arr, n) == true)
    return true;

  s -= arr[index];
  ds.pop_back();

  //  not pick
  if (printS1(index + 1, ds, s, k, arr, n) == true)
    return true;

  return false;
}


int count_sub(int index, int k, int s, int arr[], int n)
{

  if(index==n)
  {
    if(s==k)
    return 1; 
    else 
    return 0;
  }

  s+=arr[index];

  int l= count_sub(index+1, k, s, arr, n); 

  s-=arr[index]; 

  int r = count_sub(index+1, k, s, arr, n); 

  return l+r; 

}

int main()
{
  int arr[] = {1,2,1};
  int n = 3;
  int k = 2;
  vector<int> ds;

  cout << "Print all sub sequence which sum is k" << endl;
  printS(0, ds, 0, k, arr, n);
 
  cout << endl;
  cout << "Print 1 sub sequence which sum is k " << endl;
  printS1(0, ds, 0, k, arr, n);

  cout<<endl; 
  cout<<"Count sub sequence which sum is k"<<endl; 

  cout<<count_sub(0,k,0,arr,n); 



}