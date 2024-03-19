#include<bits/stdc++.h>
using namespace std;
void factorial(int n)
{
    int result=1;
    cout<<result<<" ";
    for(int i=1;i<n;i++)
    {
        result=result*(n-i);
        result=result/(i);
        cout<<result<<" ";
    }
    
}
int main()
{
    factorial(6);
}