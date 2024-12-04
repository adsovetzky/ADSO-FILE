#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("LIS.INP","r",stdin);
    freopen("LIS.OUT","w",stdout);
    int n;

    cin>>n;

    int x1=0,d=0,ans=0,x2;

    for(int i=1;i<=n;i++){
        cin>>x2;
        if(x2>x1){
            x1=x2;
            d++;
        }
        else{
            x1=x2;
            ans=max(ans,d);
            d=1;
        }
    }
    if(d!=0) ans=max(ans,d);
    cout<<ans;
}