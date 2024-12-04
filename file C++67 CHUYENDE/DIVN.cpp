#include<bits/stdc++.h>
using namespace std;

const int MAXN=1e5;

int tongso(int i){
    string s=to_string(i);
    int sum=0;
    for(char x:s){
        int meow=x-'0';
        sum+=meow;
    }
    return sum;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("DIVN.INP","r",stdin);
    freopen("DIVN.OUT","w",stdout);

    int n,k=0;

    cin>>n;

    for(int i=1;i<=MAXN;i++){
        string s=to_string(i);
        if(tongso(i)%s.size()==0) k++;
        if(k==n){
            cout<<i;
            break;
        }
    }
}