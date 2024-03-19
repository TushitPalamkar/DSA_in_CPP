#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={2,2,3,4,5,4,1,1};
    int n=sizeof(a)/sizeof(int);
    unordered_map<int,int>m;
    for(int i=0;i<n;i++)
    {
        m[a[i]]++;
    }
    for(auto it: m)
    {
        if(it.second>(n/2))
        cout<<it.first;
    }
}