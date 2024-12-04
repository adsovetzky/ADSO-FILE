#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("CANDIES.INP","r",stdin);
    freopen("CANDIES.OUT","w",stdout);
    
    long long n,d=0,ans=0;

    cin>>n;
    
    vector<long long> a;
    for(long i=1;i<=n;i++){
        long long x;
        cin>>x;
        if(x%3==0&&x!=0) {
            a.push_back(x);
            d++;
            ans+=x;
        }
    }
    cout<<d<<endl<<(ans-(d*3))/3;
}