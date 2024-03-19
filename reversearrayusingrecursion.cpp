#include<bits/stdc++.h>
using namespace std;
void revarray(string &a, int m, int n)
{
    if(m>=n)
    return;
    swap(a[m],a[n]);
    revarray(a,m+1,n-1);
}
int main()
{
   
    string arr;
    arr="abcde";
    revarray(arr,0,4);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
   
    
}