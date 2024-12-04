#include<bits/stdc++.h>
using namespace std;

const int MAXN=1e6+1;

vector<bool> snt(MAXN,true);
vector<int> meow;

void sang(){
    snt[0]=snt[1]=false;
    int p=2;
    while(p*p<=MAXN){
        meow.push_back(p);
        for(int i=2;i<=MAXN/p;i++) snt[i*p]=false;
        for(p++;p*p<=MAXN&&!snt[p];p++);
    }
}
long long tong(int n){
    int all=0;
    while(n>0){
        all+=n%10;
        n/=10;
    }
    return all;
}
long long tongthuaso(int n){
    int sum=0;
    for(int x:meow){
        if(x*x>n) break;
        while(n%x==0){
            sum+=tong(x);
            n/=x;
        }
    }
    if(n>1) sum+=tong(n);

    return sum;
}
bool CHECKVAR(int n){
    return tong(n)==tongthuaso(n);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("BAI01.INP","r",stdin);
    freopen("BAI01.OUT","w",stdout);

    sang();

    int a,b,count=0;

    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(CHECKVAR(i)) count++;
    }
    cout<<count;
}