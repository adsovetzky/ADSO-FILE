#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("ZERO.INP","r",stdin);
    freopen("ZERO.OUT","w",stdout);
    int n,tong=0,MAXREAL=0,MAXNOW=0,vitri=-1;

    cin>>n;

    vector<int> a(n);
    unordered_map<int,int> mp;

    for(int i=0;i<n;i++){
        cin>>a[i];
        tong+=a[i];
        if(tong==0){
            MAXREAL=i+1;
            vitri=0;
        }
        if(mp.find(tong)!=mp.end()){
            MAXNOW=i-mp[tong];
            if(MAXNOW>MAXREAL){
                MAXREAL=MAXNOW;
                vitri=mp[tong]+1;
            }
        }
        else{
            mp[tong]=i;
        }
    }
    cout<<MAXREAL<<endl;
}