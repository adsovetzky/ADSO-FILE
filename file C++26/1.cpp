#include<bits/stdc++.h>
using namespace std;
int main()
{
    char t='0';
    string s;
    cin>>s;
    for(char x:s)
        if(x>t)
            t=x;
    cout<<t;
}
