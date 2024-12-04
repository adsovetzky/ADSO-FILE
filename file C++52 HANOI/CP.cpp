#include<bits/stdc++.h>
using namespace std;

const int MAXN=1e6;

vector<bool> snt(MAXN,true);

void sang(){
    snt[0]=snt[1]=false;
    int p=2;
    while(p*p<=MAXN){
        for(int i=2;i<=MAXN/p;i++)snt[i*p]=false;
        for(p++;!snt[p];p++);
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("CP.INP","r",stdin);
    freopen("CP.OUT","w",stdout);
    int a,b,count=0;

    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(snt[sqrt(i)]==true&&sqrt(i)*sqrt(i)==i) count++;
    }
    cout<<count;
}