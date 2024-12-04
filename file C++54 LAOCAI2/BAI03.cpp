#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("BAI03.INP","r",stdin);
    freopen("BAI03.OUT","w",stdout);
    int n,k,MAX=0,START=-1,END=-1,s=0;

    cin>>n>>k;
    
    vector<int> a(n+1),d(n+1,-1);
    unordered_map<int,int> mp;

    for(int i=1;i<=n;i++){
        cin>>a[i];
        s+=a[i];
        d[i]=s%k;
        if(mp.find(d[i])==mp.end()){
            mp[d[i]]=i;
        }
        else if(MAX<i-mp[d[i]]){
            MAX=i-mp[d[i]];
            START=d[i]+1;
            END=i;
        }
    }
    //if(tong%k==0) {cout<<a[0]<<" "<<a[n-1];return 0;}
    if(MAX==0)cout<<0<<endl;
    else cout<<START<<" "<<END<<endl;
}