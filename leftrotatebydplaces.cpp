#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,3,4,5};
    int d;
    cout<<"Enter the no of places:";
    cin>>d;
    int temp[d];
    //shifting the array
    for(int i=0;i<5;i++)
    {
       temp[i]=a[i];
    }
    for(int i=d;i<5;i++)
    {
        a[i-d]=a[i];
    }
    for(int i=5-d;i<5;i++)
    {
        a[i]=temp[i-(5-d)];
        
    }
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
}