#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(int);
    int target=4;
    map<int,int> m;
    for(int i=0;i<n;i++)
    {
        int p=a[i];
        int required=target-p;
        if(m.find(required)!=m.end())
        {
            cout<<m[required]<<i;
        }
        m[p]=i;
    }
}