#include<bits/stdc++.h>
using namespace std;

const int MAXN=1e6;

typedef pair<int,int> adso;
int n;
adso a[MAXN];
int x[MAXN],b[MAXN];

int get(int u){
    int kq=0;
    while(u>0){
        kq+=b[u];
        u&=(u-1);
    }
    return kq;
}
void update(int u,int val){
    while(u<=n){
        b[u]+=val;
        u+=u&(-u);
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("BAI04.INP","r",stdin);
    freopen("BAI04.OUT","w",stdout);

    cin>>n;
    for(int i=1;i<=n;i++){
        int u,v;
        cin>>u>>v;
        a[i]=adso(v,u);
    }
    sort(a+1,a+n+1);
    for(int i=1;i<=n;i++){
        x[i]=a[i].second;
    }
    sort(x+1,x+n+1);
    for(int i=1;i<=n;i++) a[i].second=lower_bound(x+1,x+n+1,a[i].second)-x;
    for(int i=1;i<=n;i++) b[i]=0;
    long long ans=0;
    for(int i=1;i<=n;i++){
        ans+=get(n+1-a[i].second);
        update(n+1-a[i].second,1);
    }
    cout<<ans;
}