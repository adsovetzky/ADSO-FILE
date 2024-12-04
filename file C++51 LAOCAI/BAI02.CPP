#include<bits/stdc++.h>
using namespace std;

const int MAXN=1e6;

vector<bool> snt(MAXN,true);

void sang(){
    snt[0]=snt[1]=false;
    int p=2;
    while(p*p<MAXN){
        for(int i=2;i<=MAXN/p;i++) snt[i*p]=false;
        for(p++;!snt[p];p++);
    }
}
int main(){
    //ios_base::sync_with_stdio(0);
    //cin.tie(0);
    //cout.tie(0);
    //freopen("BAI02.INP","r",stdin);
    //freopen("BAI02.OUT","w",stdout);

    sang();
    int n;

    cin>>n;

    while(n--){
        int x;
        cin>>x;
        //cout<<(long long)sqrt(x)<<" "<<sqrt(999966000289)<<endl;
        if(snt[sqrt(x)]==true&&sqrt(x)*sqrt(x)==x) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
