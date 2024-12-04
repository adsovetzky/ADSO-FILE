#include<bits/stdc++.h>
using namespace std;

const int MAXN=1e6;

vector<bool> snt(MAXN,true);
vector<int> meow;

void sang(){
    fill(snt.begin(),snt.end(),true);
    snt[0]=snt[1]=false;
    int p=2;
    while(p*p<=int(1e5)){
        meow.push_back(p);
        for(int i=2;i<int(1e5)/p;i++) snt[i*p]=false;
        for(p++;p*p<int(MAXN)&&!snt[p];p++);
    }
}
int mang(int n,int a,int b){
    int count=0;
    for(int i=a;i<=b;i++){
        int u=i;
        for(auto x:meow){
            if(x>n) break;
            while(u%x==0){
                u/=x;
            }
        }
        if(u==1) count++;
    }
    return count;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("BAI1.INP","r",stdin);
    freopen("BAI1.OUT","w",stdout);

    int n,a,b,count=0;

    cin>>n>>a>>b;

    sang();

    cout<<mang(n,a,b);
}