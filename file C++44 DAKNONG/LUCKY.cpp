#include<bits/stdc++.h>
using namespace std;

bool MEOW(int n){
    if(n<=1) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("LUCKY.INP","r",stdin);
    freopen("LUCKY.OUT","w",stdout);

    int a,b,n,d=0;

    cin>>a>>b;
    n=a+b+1;
    while(MEOW(n)==false){
        n++;d++;
        if(MEOW(n)==true){d++;break;}
    }
    cout<<d;
}