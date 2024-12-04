#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("CSBN.INP","r",stdin);
    freopen("CSBN.OUT","w",stdout);
    int n,s,ans=0;
    map<int,int> mp;

    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>s;
        mp[s]++;
    }
    for(auto x:mp){
        if(x.first>1)
            ans+=(x.second*(x.second-1)/2);
    }
    cout<<ans;
}
