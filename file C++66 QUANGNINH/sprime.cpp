#include<bits/stdc++.h>
using namespace std;

const int MAXN = 1e6+1;

vector<int> meow(MAXN,0);
vector<bool> snt(MAXN,true);

bool CHECKVAR(int p){
    string s=to_string(p);
    int sum=0;
    for(int i=0;i<s.size();i++){
        int meow=s[i]-'0';
        sum+=meow;
    }
    return sum%5==0;
}
void sang(){
    snt[0]=snt[1]=false;
    int p=2;
    while(p*p<=MAXN){
        for(int i=2;i<=MAXN/p;i++) snt[i*p] = false;
        for(p++;p*p<=MAXN && !snt[p];p++);
    }
}
void CHECK(){
    for(int i=2;i<=MAXN;i++){
        if(CHECKVAR(i) && snt[i]) meow[i]=meow[i-1]+1;
        else meow[i]=meow[i-1];
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("sprime.inp","r",stdin);
    freopen("sprime.out","w",stdout);

    sang();
    CHECK();

    int n;

    cin>>n;

    while(n--){
        int l,r;
        cin>>l>>r;
        cout<<meow[r]-meow[l-1]<<"\n";
    }
}