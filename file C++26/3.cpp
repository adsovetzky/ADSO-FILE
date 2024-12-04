#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,dem=0,ans=0;
    cin>>n;
    vector<int> a(n);
    vector<int> d(n,1);
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
        if(a[i-1]==a[i])
            d[i]=d[i-1]+1;
    cout<<*max_element(d.begin(),d.end());
}
