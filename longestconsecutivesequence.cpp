#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={1,3,2,4,80,81,82};
    int n=sizeof(v)/sizeof(int);
    int longest=1,count=0;
    set<int> s;
    for(int i=0;i<n;i++)
    {
        s.insert(v[i]);
    }
    for(auto it: s)
    {
        if(s.find(it-1)==s.end())
        {
            int x=it;
            count++;
            while(s.find(x+1)!=s.end())
            {
                x++;
                count++;
            }
            longest=max(longest,count);
        }
        
    }
    
}