#include<bits/stdc++.h>
using namespace std;

const int MAXN=1e6;

vector<bool> snt(MAXN,true);
vector<int> meow;

void sang(){
    snt[0]=snt[1]=false;
    int p=2;
    while(p*p<MAXN){
        meow.push_back(p);
        for(int i=2;i<MAXN/p;i++) snt[i*p]=false;
        for(p++;p*p<MAXN&&!snt[p];p++);
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("SANGNGUYENTO.INP","r",stdin);
    freopen("SANGNGUYENTO.OUT","w",stdout);

    sang();

    int n;

    cin>>n;
    for(auto x:meow){
        if(x>n) return 0;
        else cout<<x<<" ";
    }
}