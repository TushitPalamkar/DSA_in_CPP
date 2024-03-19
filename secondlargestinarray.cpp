

#include <iostream>

using namespace std;

int main()
{
    int l,i,sl,n;
    cout<<"Enter the no of elements in the array:";
    cin>>n;
    int a[n];
    cout<<"Enter the array elements:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    l=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>l)
        l=a[i];
    }
    cout<<"Largest element is: "<<l;
    sl=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>sl and a[i]!=l)
        sl=a[i];
    }
    cout<<"Second largest element is: "<<sl;
    
}