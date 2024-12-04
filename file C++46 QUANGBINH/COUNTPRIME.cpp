#include<bits/stdc++.h>
using namespace std;

const int MAXN=1e5;
const int INF=1e5;
int a;

vector<bool> snt(MAXN,true);
vector<int> nya;

void MEOW(){
    snt[0]=snt[1]=false;
    int p=2;
    while(p*p<MAXN){
        for(int i=2;i<=MAXN/p;i++) snt[i*p]=false;
        for(p++;p*p<MAXN&&!snt[p];p++);
    }
    for(int i=2;i<=MAXN;i++){
        if(snt[i]==true){
            nya.push_back(i);
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("COUNTPRIME.INP","r",stdin);
    freopen("COUNTPRIME.OUT","w",stdout);

    MEOW();
    vector<int> dp(MAXN+1,INF);
    dp[0]=0;

    //for(int x:nya){
    //   for(int i=MAXN;i>=x;i--){
    //        dp[i]=min(dp[i],dp[i-x]+1);
    //    }
    //    for (int i=MAXN;i>=2*x;i--) {
    //        dp[i]=min(dp[i],dp[i-2*x]+1);
    //    }
    //} 
    while(cin>>a){
        cout<<dp[a]<<endl;
    }
}