#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n,k,d=0,maxn=INT_MIN,ans=0;

    cin>>m>>n>>k;

    vector<int> a;
    map<int,int> mp;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            int x;
            cin>>x;
            mp[x]++;
        }
    }
    for(auto x:mp){
        a.push_back(x.second);
    }
    sort(a.begin(),a.end())
//    cout<<ans;
}
