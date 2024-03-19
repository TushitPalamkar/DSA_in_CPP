#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={1,2,3,2};
    int n=sizeof(a)/sizeof(int);
    int count=0;
    int k=2;
    int xr=0;
    map<int,int> m;
    m[0]=1;
    for(int i=0;i<n;i++)
    {
        xr= xr ^ a[i];
        int x= xr ^ k;
        if(m.find(x)!=m.end())
        count+=m[x];
        m[xr]++;
    }
    cout<<count;
}