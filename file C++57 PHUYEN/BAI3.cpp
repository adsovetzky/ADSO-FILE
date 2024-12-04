#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("BAI3.INP","r",stdin);
    freopen("BAI3.OUT","w",stdout);
    
    int n,sum=0;

    cin>>n;

    vector<int> a;
    vector<int> ans(n,0);
    map<int,int> mp;

    for(int i=0;i<n;i++){
        int t,m;
        cin>>t>>m;
        a.push_back(m);
        mp[t]=max(mp[t],m);
    }
    int k=0,d=1;
    for(auto x:mp){
        int it=find(a.begin(),a.end(),x.second)-a.begin();
        ans[it]=d++;
        sum+=x.second;
    }
    for(auto x:ans){
        if(x==0) cout<<d++<<endl;
        else cout<<x<<endl;
    }
    cout<<sum;
}