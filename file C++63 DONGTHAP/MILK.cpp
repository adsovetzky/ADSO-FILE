#include<bits/stdc++.h>
using namespace std;

vector<int> a;

int han(int k){
    int day=1;
    int sum=0;
    int hethan=0;
    for(int i=0;i<a.size();i++){
        if(a[i]>=day){
            sum++;
        }
        else{
            hethan++;
        }
        if(sum==k){
            sum=0;
            day++;
        }
    }
    return hethan;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("MILK.INP","r",stdin);
    freopen("MILK.OUT","w",stdout);

    int n,k;

    cin>>n>>k;

    a.resize(n);

    for(int i=0;i<n;i++){
        cin>>a[i];    
    }
    sort(a.begin(),a.end());

    cout<<han(k)<<endl;

    int l=1,r=n,ans=INT_MAX;
    while(l<=r){
        int mid=(l+(r-l)/2);
        if(han(mid)==0){
            ans=min(ans,mid);
            r=mid-1;
        }
        else l=mid+1;
    }
    cout<<ans;
}