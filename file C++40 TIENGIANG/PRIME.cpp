#include<bits/stdc++.h>
using namespace std;

const int MAXN=10000000;
vector<bool> snt(MAXN,true);

void meow(){
    snt[0]=snt[1]=false;
    int p=2;
    while(p*p<MAXN){
        for(int i=2;i<=MAXN/p;i++) snt[i*p]=false;
        for(p++;p*p<MAXN&&!snt[p];p++);
    }
}
int MEOW(int a){
    if(a>1&&snt[a]) return 1;
    int ans=0;
    for(int i=2;i<=sqrt(a);i++){
        if(a%i==0&&snt[i]==true){
            ans++;
            int nya = a / i;
                if (nya != i && snt[nya]) ans++;
        }
    }
    return ans;
}
int main(){
    meow();
    int n,maxx=INT_MIN;

    cin>>n;

    vector<int> a(n);
    vector<pair<int,int>> b;
    for(int i=0;i<n;i++){
        cin>>a[i];
        maxx=max(maxx,MEOW(a[i]));
        b.push_back({a[i],MEOW(a[i])});
    }
    for(auto x:b){
        if(x.second==maxx){
            cout<<x.first;
            return 0;
        }
    }
}
