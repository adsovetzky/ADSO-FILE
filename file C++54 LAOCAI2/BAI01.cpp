#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("BAI01.INP","r",stdin);
    freopen("BAI01.OUT","w",stdout);
    int l,r,a,b,count=0;

    cin>>l>>r>>a>>b;
    int BCNN=(a*b)/(__gcd(a,b));
    int i=1;
    cout<<(r/BCNN)-((l-1)/BCNN);
}