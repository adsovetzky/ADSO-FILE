#include<bits/stdc++.h>
using namespace std;
const int MAXN=1e6;

vector<bool>snt(MAXN,true);
vector<long long> nya;
vector<long long> b;

void meow(){
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

void thuaso(long long n){
    for(auto x:nya){
        if(x*x>n) break;
        while(n%x==0){
            b.push_back(x);
            n/=x;
        }
    }
    if(n>1) b.push_back(-1);
}

long long tong(long long n){
    int s=0;
    while(n>0){
        s+=n%10;
        n/=10;
    }
    return s;
}

bool dacbiet(long long n){
    thuaso(n);
    int t=0;
    for(auto x:b){
        t+=tong(x);
    }
    if(t==tong(n)) return true;
    else return false;
}

int main(){
    long long n;
    meow();
    cin>>n;
    long long ans=n+1;
    while(!dacbiet(ans)){
        ans++;
    }
    cout<<ans;
    return 0;
}
