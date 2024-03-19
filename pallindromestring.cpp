#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[10];
    cout<<"Enter the string:";
    cin>>a;
    int start=0;
    int end=strlen(a)-1;
    int flag=0;
    while(start<end)
    {
         
        if(a[start]==a[end])
        {
            flag=1;
            start++;
            end--;
        }
        else
        {
            break;
        }
    }
    if(flag==1)
    cout<<"pallindrome";
    else
    cout<<"Not pallindrome";
    
}