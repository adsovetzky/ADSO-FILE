#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("PHANSO.INP","r",stdin);
    freopen("PHANSO.OUT","w",stdout);
    int n;
    cin>>n;
    int tu=0, mau=1;
    for(int i=0;i<n;i++) {
        int x, y;
        cin>>x>>y;
        tu=tu*y+x*mau;
        mau*=y;
        int meow= __gcd(tu, mau);
        tu/=meow;
        mau/=meow;
    }
    if(tu%mau==0) {cout<<tu/mau;}
    if(tu%mau!=0){
        if(tu>mau) cout<<tu/mau<<" "<<tu%mau<<" "<<mau;
        else cout<<tu<<" "<<mau;
    }
    return 0;
}