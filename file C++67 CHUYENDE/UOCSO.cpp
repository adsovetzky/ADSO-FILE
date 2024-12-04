#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("UOCSO.INP","r",stdin);
    freopen("UOCSO.OUT","w",stdout);
    int n,ans=1;

    vector<int> a(8);
    a[0]=2; a[1]=3; a[2]=5; a[3]=7; a[4]=11; a[5]=13;
    a[6]=17; a[7]=19;
    cin>>n;
    for(int i=0;i<a.size();i++){
        int k=1,sum=0;
        while(pow(a[i],k)<=n){
            sum+=n/pow(a[i],k);
            k++;
        }
        ans*=(sum+1);
    }
    cout<<ans;
}