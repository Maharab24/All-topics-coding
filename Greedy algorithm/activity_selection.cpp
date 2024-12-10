#include<bits/stdc++.h>
using namespace std;



bool comapre(const pair<int,int> &p1,const pair<int,int> &p2)

{
    if(p1.second<p2.second)
    return true;
    else
    return false ;
}


int main()
{
    int n;
    cin>>n;

    vector<pair<int,int>> a(n);

    for(int i=0 ; i <n ; i++)
    {
        cin>>a[i].first>> a[i].second;
    }

    vector<pair<int,int>> b=a;
    sort(a.begin(), a.end(), comapre);


    /*Select 1st 2 activities*/

    vector<pair<int,int>> f2;

  f2.push_back(a[0]);

  int x=0;

    for(int i=1 ; i<n ; i++)
    {

        if(a[i].first>=f2[x].second)
        {
           f2.push_back(a[i]);
           x++ ;
        }

    }

    cout<<"Print all valid activiy"<<endl;

    for(auto u : f2)
    cout<<u.first<<" "<<u.second<<endl;


    cout<<"The activity that end first"<<endl;


    pair<int,int> ans =f2[0];


   for(int i=0 ; i<n ; i++)
   {
        if(b[i]==ans)
        {
            cout<<"The activity which end 1st is "<<i<<endl;
        }
   }




   /*select the activity that has the shortest duration*/


   pair<int,int> ans1;
   int index=-1;

   int mini= INT_MAX;

   for(int i=0 ; i< n ; i++)
   {
        if(abs(b[i].first-b[i].second)<mini)
        {
            mini=abs(b[i].first-b[i].second);
            index=i;

        }
   }

   cout<<"Short duration "<<index<<endl;







}