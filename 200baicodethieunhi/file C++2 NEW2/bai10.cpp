#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("bai10.inp","r",stdin);
    freopen("bai10.out","w",stdout);
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,p,tmp=0;
        cin>>n>>p;
        while(n/p>0){
            tmp+=n/p;
            n/=p;
        }
        cout<<tmp<<"\n";
    }
}