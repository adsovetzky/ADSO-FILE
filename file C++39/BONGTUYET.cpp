#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,ans=0,ansreal=0,k=1,minn=INT_MAX;

    cin>>n;

    map<long long, long long> mp;
    for(long long i=1;i<=n*n;i++){
        int x;
        cin>>x;
        ans+=x;
        mp[x]++;
    }
    for(auto x:mp){
        long long a=x.first*x.second;
        minn=min(a,minn);
    }
        cout<<ans-minn<<endl;
}
