#include<bits/stdc++.h>
using namespace std;
const long long MAXN = 1000000;
vector<long long> meoww(MAXN,0);
long long tonguoc(int n){
    long long tong=0;
        for(long long i=1;i<=sqrt(n);i++){
        if(n%i==0){
            tong+=i;
            if(i!=n/i){
                tong+=n/i;
            }
        }
    }
    return tong;
}
int main()
{
    freopen("BOMCHUM.INP","r",stdin);
    freopen("BOMCHUM.OUT","w",stdout);
    long long n;

    cin>>n;

    vector<long long> a(n);
    vector<long long> ans(n);
    for(long long i=0;i<n;i++){
        cin>>a[i];
        ans[i]=tonguoc(a[i]);
    }
    for(auto x:ans){
        cout<<x<<" ";
    }
}
