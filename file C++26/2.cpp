#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='a' and s[i]<='z')
            s[i]-=32;
    }
    cout<<s;
}
