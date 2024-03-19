#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a={2,1,5,4,3,0};
    vector<int> ans;
    int n=a.size();
    int maxi=0;
    for(int i=n-1;i>=0;i--)
    {
        if(maxi<a[i])
        {   
            ans.push_back(a[i]);
        }
        maxi=max(a[i],maxi);
    }
}