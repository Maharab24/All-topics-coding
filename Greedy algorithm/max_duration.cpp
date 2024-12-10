#include <bits/stdc++.h>
using namespace std;

bool comapre(const pair<int, int> &p1, const pair<int, int> &p2)

{
    if (abs(p1.second - p1.first) > abs(p2.second - p2.first))
        return true;
    else
        return false;
}

int main()
{
    int n;
    cin >> n;

    vector<pair<int, int>> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }

    vector<pair<int, int>> b = a;
    sort(a.begin(), a.end(), comapre);

    vector<pair<int, int>> f2;

    f2.push_back(a[0]);

    int x = 0;

    for (int i = 1; i < n; i++)
    {

        if (a[i].first >= f2[x].second)
        {
            f2.push_back(a[i]);
        }
    }

    pair<int,int> check=f2[0];

    for(int i=0; i<n ; i++)
    {
        if(b[i].second<f2[0].first)
        {
            f2.push_back(b[i]);
        }
    }

    sort(f2.begin(),f2.end());

    for(auto u : f2)
    cout<<u.first<<" "<<u.second<<endl; 
}