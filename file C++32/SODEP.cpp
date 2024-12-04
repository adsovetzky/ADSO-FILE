#include<bits/stdc++.h>
using namespace std;

int n,T;

bool meow(int n){
    T=0;
    while(n>0){
        T+=n%10;
        n/=10;
    }
    int a=T%10;
    if(a==9) return true;
    else return false;
}
int main()
{
    freopen("SODEP.INP","r",stdin);
    freopen("SODEP.OUT","w",stdout);
    cin>>n;
    meow(n);
    if(meow(n)==true) cout<<'1';
    else cout<<'0';
}
