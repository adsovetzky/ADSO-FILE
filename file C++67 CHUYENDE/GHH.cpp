#include<bits/stdc++.h>
using namespace std;

const int MAXN = 1e6;

vector<int> uoc(MAXN,1);

void tonguoc(){
    for(int i=2;i<=sqrt(MAXN);i++){
        for(int j=i;j<=MAXN;j+=i){
            uoc[j]+=i;
        }
    }
}

bool CHECKVAR(int a){
    return 2*a<=uoc[a];
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("GHH.INP","r",stdin);
    freopen("GHH.OUT","w",stdout);   

    tonguoc();
     
    int n;

    cin>>n;

    while(n--){
        int a;

        cin>>a;

        cout<<CHECKVAR(a)<<"\n";
    }
}