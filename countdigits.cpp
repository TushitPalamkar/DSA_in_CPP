#include<iostream>
using namespace std;
int main()
{
    int count=0;
    int n;
    cout<<"Enter a no:";
    cin>>n;
    while(n>0)
    {
        n=n/10;
        count++;
    }
    cout<<"Reversed digit:"<<count;
}