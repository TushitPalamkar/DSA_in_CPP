#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<int>d;
    d.emplace_back(3);
    d.emplace_back(4);
    d.pop_front();
    d.emplace_front(5);
    d.front();
    for(auto it=d.begin(); it!=d.end();it++)
    {
        cout<<*it<<" ";
    }
}