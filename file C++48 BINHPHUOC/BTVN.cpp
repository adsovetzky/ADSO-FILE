#include<bits/stdc++.h>
#include<cmath>
using namespace std;

const int MAXN=1e6;

vector<bool> snt(MAXN,true);
vector<int> meow;

long long tonguoc(int N){
    snt[0]=snt[1]=false;
    for(int i=2;i*i<=N;i++){
        if(snt[i]==true){
            for(int j=i*i;j<=N;j+=i) snt[j]=false;
        }
    }
    long long ans=1;
    for(int p=2;p<=N;p++){
        if(snt[p]==true){
            long long count=0;
            for(long long multiple=p;multiple<=N;multiple*=p){
                count+=N/multiple;
            }
            long long sum_of_powers=1;
            long long power_of_p=1;
            for(int i=0;i<count;i++){
                power_of_p*=p;
                sum_of_powers+=power_of_p;
            }
            ans*=sum_of_powers;
        }
    }
    return ans;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("BTVN.INP","r",stdin);
    freopen("BTVN.OUT","w",stdout);

    int n,a;

    cin>>n;
    while(n--){
        cin>>a;
        cout<<tonguoc(a)<<endl;
    }
}