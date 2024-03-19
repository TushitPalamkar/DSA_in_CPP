#include<bits/stdc++.h>
using namespace std;
vector<int>rows(int row)
{
    vector<int>result;
    result.push_back(1);
    int ans=1;
    for(int i=1;i<row;i++)
    {
        ans=ans*(row-i);
        ans=ans/i;
        result.push_back(ans);
    }
    return result;
}
int main()
{
    int row=3;
    vector<vector<int>>solution;
    for(int i=1;i<=row;i++)
    {
        solution.push_back(rows(i));
    }
}