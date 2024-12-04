#include<bits/stdc++.h>
using namespace std;

const int MAXN=1e6+1;

vector<bool> snt(MAXN,true);
vector<int> meow(MAXN);

bool tong(int n){
    long long sum=0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    return sum%5==0;
}
void sang(){
    snt[0]=snt[1]=false;
    for(int i=2;i<=sqrt(MAXN);i++){
        if(snt[i]==true){
            for(int j=i*i;j<=MAXN;j+=i){
                snt[j]=false;
            }
        }
    }
    for(int i=2;i<=MAXN;i++){
        if(snt[i]&&tong(i)) meow[i]=meow[i-1]+1;
        else meow[i]=meow[i-1];
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("BAI03.INP","r",stdin);
    freopen("BAI03.OUT","w",stdout);
    
    sang();

    int t;

    cin>>t;
    t++;
    while(t--){
        int l,r;
        cin>>l>>r;
        cout<<meow[r]-meow[l-1]<<endl;
    }
}