#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,3,4,5,6};
    int i;
    for(i=0;i<6;i++)
    {
        if(a[i+1]>=a[i])
        {

        }
        else
        cout<<"Not sorted";
    }
    cout<<"Array is sorted";
}