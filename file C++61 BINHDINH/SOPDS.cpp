#include<bits/stdc++.h>
using namespace std;

const int MAXN=1e6+1;

vector<int> meow;

bool CHECK(int i){
    string s=to_string(i);
    int tich=1,tong=0;
    for(char x:s){
        int meow=x-'0';
        tich*=meow;
        tong+=meow;
    }
    return tich%tong==0;
}
void CHECKVAR(){
    for(int i=1;i<=MAXN;i++){
        if(CHECK(i))
        meow.push_back(i);
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("SOPDS.INP","r",stdin);
    freopen("SOPDS.OUT","w",stdout);

    CHECKVAR();

    int n;

    cin>>n;

    cout<<meow[n-1];
}