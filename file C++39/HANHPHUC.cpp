#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,ans=0,a[1000],s=0;

    cin>>n;
    for(int i=1;i<=n;i++){
            cin>>a[i];
            s+=a[i];
    }
    for(int i=1;i<=n;i++){
        ans+=a[i]*(s-a[i]);
        s=s-a[i];
    }
    cout<<ans;
}
