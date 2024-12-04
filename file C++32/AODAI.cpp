#include<bits/stdc++.h>
using namespace std;
int main()
{
//    freopen("AODAI.INP","r",stdin);
//    freopen("AODAI.out","w",stdout);
    map<int,int> mp;
    int ans=0,n;

    cin>>n;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        mp[x]++;
    }
    for(auto x:mp){
        int a=4-x.first;
        if(mp.find(a)!=mp.end()){
            ans+=min(mp[a],x.second);
        }
        if(a==2&&mp[a]%2==0){
            ans+=x.second/x.first;
        }
        if(a==2&&mp[a]%2!=0&&mp[a]>1){
            ans+=(x.second-1)/x.first;
            x.second=x.second-1;
        }
        if(a==4){
            ans+=x.second;
        }
    }
    cout<<ans;
}
