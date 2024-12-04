#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("BAI04.INP","r",stdin);
    freopen("BAI04.OUT","w",stdout);
    int n,ans=0;

    cin>>n;

    vector<int> a(n);
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    for(int i=0;i<=n-2;i++){
        int k=i+2;
        for(int j=i+1;j<=n-1;j++){
            while(k<n&&a[i]+a[j]>a[k]) k++;
            ans+=k-j-1;
        }
    }
    cout<<ans;
}