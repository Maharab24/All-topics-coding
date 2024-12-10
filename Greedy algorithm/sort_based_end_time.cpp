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
    vector<pair<int,int>> a(6);

    for(int i=0 ; i <6 ; i++)
    {
        cin>>a[i].first>> a[i].second;
    }

    sort(a.begin(), a.end(), comapre);

    for(auto u : a)
    cout<<u.first<<" "<<u.second<<endl;


}