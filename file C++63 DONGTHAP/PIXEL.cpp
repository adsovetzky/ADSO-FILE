#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("PIXEL.INP","r",stdin);
    freopen("PIXEL.OUT","w",stdout);

    int n,count=0,MAX=INT_MIN;

    cin>>n;

    map<int,int> mp;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(mp.find(x)==mp.end())count++;
        mp[x]++;
        MAX=max(MAX,mp[x]);
    }
    cout<<count<<"\n"<<MAX;
}