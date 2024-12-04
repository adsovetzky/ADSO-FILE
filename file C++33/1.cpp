#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%50000!=0) cout<<50000-n%50000;
    else cout<<0;
}
