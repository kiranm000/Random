//Generating all the Sub-Strings of a String
#include<bits/stdc++.h>
int main() {
    string s="abcde";
    int n=s.length();
    for(int i=0;i<n;i++)
    {
        for(int len=1;len<=n-i;len++)
        {
            cout<<s.substr(i,len)<<endl;
        }
    }
}