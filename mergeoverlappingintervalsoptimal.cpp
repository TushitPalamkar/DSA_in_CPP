#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> arr={{1,3},{2,5},{8,10}};
    vector<vector<int>> ans;
    for(int i=0;i<arr.size();i++)
    {
        if(ans.empty() or arr[i][0]>ans.back()[1])
        {
            ans.push_back(arr[i]);
        }
        else{
            ans.back()[1]=max(ans.back()[1],arr[i][1]);
        }
    }
    for(auto it: ans)
    {
        cout<<it[0]<<" "<<it[1]<<endl;
    }
    
}