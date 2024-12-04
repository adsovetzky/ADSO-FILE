#include<bits/stdc++.h>
using namespace std;

bool cancat(long long mid,vector<long long> a,long long k){
    long long dem=0;

    for(long long i=0;i<a.size();i++){
        dem+=a[i]/mid;
    }
    return dem>=k;
}
long long tinhmid(long long R, long long L,vector<long long> a,long long k){
   long long mid,maxx;

    while(L<=R){
        mid=(L+R)/2;
        if(cancat(mid,a,k)==true){
            maxx=mid;
            L=mid+1;
        }
        else{
            R=mid-1;
        }
    }
    return maxx;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("DAYCAP.INP","r",stdin);
    freopen("DAYCAP.OUT","w",stdout);

    long long n,k,L=1, R=INT_MIN;

    cin>>n>>k;
    
    vector<long long> a(n);

    for(long long i=0;i<n;i++){
        cin>>a[i];
        R=max(R,a[i]);
    }
    cout<<tinhmid(R,L,a,k);
}