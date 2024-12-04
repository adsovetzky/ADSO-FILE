#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("VANNGHE.INP","r",stdin);
    freopen("VANNGHE.OUT","w",stdout);
    int n,m;

    cin>>n>>m;
    cout<<__gcd(n,n+m)<<"\n"<<n/__gcd(n,n+m)<<" "<<m/__gcd(n,n+m)<<"\n";
}