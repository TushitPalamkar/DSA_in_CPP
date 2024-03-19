#include<bits/stdc++.h>
using namespace std;
int factorial(int n, int r)
{
    int result=1;
    for(int i=0;i<r;i++)
    {
        result=result*(n-i);
        result=result/(i+1);//usually it is result*i but we are going for the short method i.e 10c2=10*9/2*1
    }
    return result;
}
int main()
{
    int ans= factorial(3,2);
    cout<<ans<<endl;
    cout<<"Pascal triangle:";
    cout<<factorial(3-1,2-1);
}