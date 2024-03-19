#include<bits/stdc++.h>
using namespace std;
bool comp(pair <int,int>p1, pair<int,int>p2)
{
    if(p1.first<p2.first)
    return true;
    if(p1.second<p2.second)
    return true;
}
int main()
{
    pair<int,int> p[]={{1,2},{1,4},{2,5}};
    sort(p,p+3,comp);
    cout<<p[0].first<<" "<<p[0].second<< " "<<p[1].first<< " "<<p[1].second<< " "<<p[2].first<<" "<<p[2].second;
}