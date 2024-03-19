#include<iostream>
using namespace std;
int main()
{
    int a[]={1,0,2,0,4,0};
    int temp[10];
    int i;
    int j=0;
    for(i=0;i<6;i++)
    {
        if(a[i]!=0)
        {
            temp[j]=a[i];
            j++;
        }
    }
   //no of zeroes=3
   for(i=6-3;i<6;i++)
   {
    temp[i]=0;
   }
   for(i=0;i<6;i++)
   {
    cout<<temp[i];
   }
}