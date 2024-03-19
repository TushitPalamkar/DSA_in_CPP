#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10][10];
    int m,n;
    cout<<"Enter the no of rows and columns:";
    cin>>m>>n;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    int left=0,right=n-1;
    int top=0,bottom=m-1;
    while(left<=right and top<=bottom)
    {
        for(int i=left;i<=right;i++)
        {
            cout<<a[top][i];
        }
        cout<<endl;
        top++;
        for(int i=top;i<=bottom;i++)
        {
            cout<<a[i][right];
        }
        right--;
        cout<<endl;
        if(top<=bottom)
        {
            for(int i=right;i>=left;i--)
            {
                cout<<a[bottom][i];
            }
            cout<<endl;
        }
        bottom--;
        if(left<=right)
        {
            for(int i=bottom;i>=top;i--)
            {
                cout<<a[i][left];
            }
            cout<<endl;
        }
        left++;
    }
}