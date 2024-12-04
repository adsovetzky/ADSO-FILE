#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("ZERO.INP","r",stdin);
    freopen("ZERO.OUT","w",stdout);
    int n,x,tong=0,index=-1,MAXREAL=0, MAXNOW=0;

    cin>>n;

    unordered_map<int,int> mp;

    for(int i=0;i<n;i++){ 
        cin>>x;
        tong+=x;
        if(tong==0){
            MAXREAL=i+1;
        }
        if(mp.find(tong)!=mp.end()){
            MAXNOW=i-mp[tong];
            MAXREAL=max(MAXREAL,MAXNOW);
        }
        else mp[tong]=i;
    }
    cout<<MAXREAL;
}