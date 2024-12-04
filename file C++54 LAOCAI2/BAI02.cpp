#include<bits/stdc++.h>
using namespace std;

const int MAXN=1e6+1;

vector<bool> snt(MAXN,true);

int daonguoc(int i){
    string s=to_string(i);
    reverse(s.begin(),s.end());
    return stoi(s);
}
void sang(){
    snt[0]=snt[1]=false;
    int p=2;
    while(p*p<=MAXN){
        for(int i=2;i<=MAXN/p;i++) snt[i*p]=false;
        for(p++;p*p<=MAXN&&!snt[p];p++);
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("BAI02.INP","r",stdin);
    freopen("BAI02.OUT","w",stdout);
    int a,b,count=0;

    sang();

    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(snt[i]&&snt[daonguoc(i)]) count++;
    }
    cout<<count;
} 