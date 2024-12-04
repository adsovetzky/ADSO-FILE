#include<bits/stdc++.h>
using namespace std;

const int MAXN=1e6;

vector<long long> soluonguoc(MAXN,0);
vector<long long> juan(MAXN,0);
vector<bool> snt(MAXN,true);

void sang(){
    snt[0]=snt[1]=false;
    int p=2;
    while(p*p<MAXN){
        for(int i=2;i<MAXN/p;i++)snt[i*p]=false;
        for(p++;p*p<MAXN&&!snt[p];p++);
    }
}
void uoc(){
    for(int i=1;i<=sqrt(MAXN);i++){
        for(int j=i;j<=MAXN;j+=i){
            soluonguoc[j]++;
        }
    }
}
void CHECKVAR(){
    for(int i=2;i<=MAXN;i++){
        if(snt[soluonguoc[i]]==true) juan[i]=juan[i-1]+1;
        else juan[i]=juan[i-1];
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("CAU4.INP","r",stdin);
    freopen("CAU4.OUT","w",stdout);

    sang();
    uoc();
    CHECKVAR();

    int n;

    cin>>n;
    
    while(n--){
        int l,r;
        cin>>l>>r;
        cout<<juan[r]-juan[l-1]<<"\n";
    }
}