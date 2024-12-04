#include<bits/stdc++.h>
using namespace std;

const int MAXN=1e6+1;

vector<bool> snt(MAXN,true);
vector<int> meow;

void sang(){
    snt[0]=snt[1]=false;
    int p=2;
    while(p*p<=MAXN){
        for(int i=2;i<=MAXN/p;i++) snt[i*p]=false;
        for(p++;p*p<=MAXN&&!snt[p];p++);
    }
}
void chillguy(int num, int size, int n){
    if(size==n){
        meow.push_back(num);
        return;
    }
    for(int i=1;i<=9;i++){
        int new_num=num*10+i;
        if(snt[new_num]){
            chillguy(new_num,size+1,n);
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("BAI1.INP","r",stdin);
    freopen("BAI1.OUT","w",stdout);

    sang();

    int n;
    
    cin>>n;
    
    for(int i=2;i<=9;i++){
        if(snt[i]){
            chillguy(i,1,n);
        }
    }
    for(auto x:meow){
        cout<<x<<endl;
    }
}