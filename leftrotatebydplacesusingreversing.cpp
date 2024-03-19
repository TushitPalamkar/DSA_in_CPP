#include<iostream>
using namespace std;
void reversal(int a[], int start, int end)
{
    int temp;
  
    while(start<=end)
    {
          temp=a[start];
          a[start]=a[end];
          a[end]=temp;
          start++;
          end--;
 
    }
}
int main()
{
    int a[]={1,2,3,4,5};
    reversal(a,0,1);
    reversal(a,2,4);
    reversal(a,0,4);
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
}
