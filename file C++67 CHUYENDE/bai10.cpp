#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("bai10.INP","r",stdin);
    freopen("bai10.OUT","w",stdout);
    
    int n,k=1,sum=0;

    cin>>n;

    while(pow(5,k)<=n){
        sum+=n/(pow(5,k));
        k++;
    }
    cout<<sum;
}