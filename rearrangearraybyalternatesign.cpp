#include<iostream>
using namespace std;
int main()
 {
    int a[]={1,-2,-4,-5,2,3,6};
    int n=sizeof(a)/sizeof(int);
    int ans[n];
    int neg=1,pos=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            ans[pos]=a[i];
            pos+=2;
        }
        if(a[i]<0)
        {
            ans[neg]=a[i];
            neg+=2;
        }
    }
  
}