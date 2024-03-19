#include<iostream>
using namespace std;
int main()
{
    int a[]={1,1,2,3,4,4,5};
    int n;
    n=sizeof(a)/sizeof(int);
    int i,j;
    i=0;
    for(j=1;j<n;j++)
    {
        if(a[j]!=a[i])
        a[i+1]=a[j];
        i++;
    }
  
}