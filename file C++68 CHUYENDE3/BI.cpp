#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("BI.INP","r",stdin);
    freopen("BI.OUT","w",stdout);
    int n,q;

    cin>>n>>q;

    vector<int> a(n+1,0);

    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        a[i]=a[i-1]+x;
    }
    while(q--){
        int l,r;
        cin>>l>>r;
        cout<<a[r]-a[l-1]<<"\n";
    }
}