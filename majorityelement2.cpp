#include<bits/stdc++.h>
using namespace std;
vector<int> main()
{
    vector<int> nums;
    int el1,el2,count1=0,count2=0;
        for(int i=0;i<nums.size();i++)
        {
            if(count1==0 and nums[i]!=el2)
            {
                el1=nums[i];
                count1++;
            }
            else if(count2==0 and nums[i]!=el1)
            {
                el2=nums[i];
                count2++;
            }
            else if(el1==nums[i])
            {
                count1++;
            }
            else if(el2==nums[i])
            {
                count2++;
            }
            else
            {
                count1--;
                count2--;
            }
        }
        vector<int> ans;
        int c1=0,c2=0;
        for(int i=0;i<nums.size();i++)
        {
            if(el1==nums[i])
            c1++;
            if(el2==nums[i])
            c2++;
        }
        if(c1>(nums.size())/3)
        ans.push_back(el1);
        if(c2>(nums.size())/3)
        ans.push_back(el2);
        return ans;
}