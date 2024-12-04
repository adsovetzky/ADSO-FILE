#include<bits/stdc++.h>
using namespace std;

const int MAXN=1e6;
vector<bool> snt(MAXN,true);
vector<long long> dem(MAXN,0);
vector<long long> tong(MAXN,0);

void meow(){
    snt[0]=snt[1]=false;
    int p=2;
    while(p*p<MAXN){
        for(int i=2;i<MAXN/p;i++) snt[i*p]=false;
        for(p++;p*p<MAXN&&!snt[p];p++);
    }
    for(int i=2;i<=MAXN;i++){
        if(snt[i]==true){
            dem[i]=dem[i-1]+1;
            tong[i]=tong[i-1]+i;
        }
        else{
            dem[i]=dem[i-1];
            tong[i]=tong[i-1];
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("alloy.inp","r",stdin);
    freopen("alloy.out","w",stdout);
    
    meow();

    int n,a,b,soluong=0,tongreal=0;

    cin>>n;
    while(n--){
        cin>>a>>b;
            soluong=dem[b]-dem[a-1];
            tongreal=tong[b]-tong[a-1];
            cout<<soluong<<" ";
            cout<<fixed<<setprecision(2)<<(float)tongreal/(float)soluong<<endl;
         }
}