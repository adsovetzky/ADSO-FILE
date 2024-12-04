#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("DKT.INP","r",stdin);
    freopen("DKT.OUT","w",stdout);
    long long n,tong=0;
    char index;
    
    cin>>n;

    tong=((n*(n+1))/2)+1;
    if(tong>26) index=tong%26+64;
    else index=tong+64;
    cout<<index;
}