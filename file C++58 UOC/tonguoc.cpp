#include<bits/stdc++.h>
using namespace std;
long long tonguoc(long long n){
    long long ans=0;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            if(n/i==i) ans+=i;
            else ans+=i+n/i;
        }
    }
    return ans;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("tonguoc.inp","r",stdin);
    freopen("tonguoc.out","w",stdout);
    long long a,b,x,sum=0;

    cin>>a>>b;
    x=__gcd(a,b/3);
    cout<<tonguoc(x);
}