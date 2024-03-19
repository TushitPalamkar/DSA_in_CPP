#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,3,5};
    int i,j;
    int n=5;
    int flag;
    for(i=1;i<=5;i++)
    {
        flag=0;
        for(j=0;j<n-1;j++)
        {
            if(a[j]==i)
            {
                flag=1;
                break;
            }
        }
    }
    if(flag==0)
    cout<<"Number is missing";
}