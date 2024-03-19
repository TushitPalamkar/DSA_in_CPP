#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>m;
    map<pair<int,int>,int>mp;
    map<int,pair<int,int>>mpp;
    //map{key,value}
    m[1]=2; //stored as {1,2}
    m.insert({3,1});
    mpp[{2,3}]=5;
    for(auto it=m.begin();it!=m.end();it++)
    {
        cout<<it.first()<<it.second()<<endl;
    }
}