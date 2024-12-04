#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("BAI03.INP","r",stdin);
    freopen("BAI03.OUT","w",stdout);

    int n,s;

    cin>>n>>s;

    vector<long long> a(n+1,0), tong(n+1,0);

    for(int i=1;i<=n;i++){
        cin>>a[i];
        tong[i]=tong[i-1]+a[i];
    }
    int minlen=INT_MAX;
    for(int i=1;i<=n;i++){
        long long vitri=tong[i]-s;
        auto it=lower_bound(tong.begin(),tong.begin()+i,vitri);
        if(it!=tong.begin()+i){
            int meow=it-tong.begin();
            if(tong[i]-tong[meow]<=s)
            minlen=min(minlen,i-meow);
        }
    }
    if(minlen==INT_MAX) minlen=0;
    cout<<minlen<<endl;
}