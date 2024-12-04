#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("TINHTONG.INP","r",stdin);
    freopen("TINHTONG.OUT","w",stdout);
    int n,x1=0,x2;
    int MAXN=INT_MIN, MINN=INT_MAX;

    cin>>n;
    
    vector<int> tong(n+1);

    for(int i=1;i<=n;i++){
        cin>>x2;
        x1+=x2;
        MAXN=max(MAXN,x1);
        MINN=min(MINN,x1);
    }
    cout<<MAXN-MINN;
}