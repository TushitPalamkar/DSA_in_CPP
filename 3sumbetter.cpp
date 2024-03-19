#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> triplet(vector<int> v)
{
    set<vector<int>> s;
    for(int i=0;i<v.size();i++)
    {
        set<int>hashset;
        for(int j=i+1;j<v.size();j++)
        {
            int third=-(v[i]+v[j]);
            if(hashset.find(third)!=hashset.end())
            {
                vector<int> temp={v[i],v[j],third};
                s.insert(temp);
            }

        }
    }
    vector<vector<int>> ans(s.begin(),s.end());
    return ans;
}
int main()
{
    vector<int> v= {1,2,-3,4,5,6};
    
}