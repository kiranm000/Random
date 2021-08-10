Random Pattern Generation
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=6;
    // First
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    // Second
    for(int i=0;i<n;i++)
    {
        for(int j=n-1;j>i;j--)
            cout<<" ";
        for(int k=0;k<=i;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    // Third
    for(int i=0;i<n;i++)
    {
        for(int j=n-1;j>i;j--)
            cout<<" ";
        for(int k=0;k<=2*i;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
}