#include<bits/stdc++.h>
using namespace std;

const int MAXN=1e6+1;

vector<bool> snt(MAXN,true);
vector<int> meow;

bool checkint(double value){
    return float(value)==value;
}
//ax+by=c -> ax=c-by -> x=(c-by)/a
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("BAI1.INP","r",stdin);
    freopen("BAI1.OUT","w",stdout);
    
    int a,b,c,count=0;
    //ax+by=c
    cin>>a>>b>>c;

    for(int i=1;i<=MAXN;i++){
        if(checkint((c-b*i)/a) && ((c-b*i)/a)>0 && __gcd((c-b*i)/a,i)==1) count++;
    }
    cout<<count;
}