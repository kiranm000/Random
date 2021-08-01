//Special Numbers 
//Printing all the numbers until n which consists of 2 & 5.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> ans;
    int n;
    cin>>n;
    for(int i=1;i<n;i++)
    {
        int a = i;
        int count1=0;
        int count2=0;
        while(a!=0)
        {
            if(a%10==2 || a%10==5)
            {
                count1++;
                a=a/10;
            }
            else
            {
                count2++;
                a=a/10;
            }
        }
        if(count2==0)
        ans.push_back(i);   
    }
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<endl;
    }
}