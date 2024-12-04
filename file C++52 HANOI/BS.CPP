#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("BS.INP","r",stdin);
    freopen("BS.OUT","w",stdout);
    long long n,k,count=0;

    cin>>n>>k;
    for(long long i=1;i<=min(n,(long long)sqrt(k));i++){
        if(k%i==0){
            long long j=k/i;
            if(j<=n&&i<=n){
                if(i!=j){
                    count+=2;
                }
                else count++;
            }
        }
    }
    cout<<count;
}