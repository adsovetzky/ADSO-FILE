#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    freopen("bai8.inp","r",stdin);
    freopen("bai8.out","w",stdout);
    vector<int> a,b(1001);
    int t,n;
    cin>>t;
    while(t--){
        int dem=0,N;
        cin>>n;
        N=n;
        for(int i=1;i<n;i++){
            if(n%i==0){
                dem++;
                n-=i;
            }
        }
        if(dem%2==0) cout<<"0"<<"\n";
        else cout<<"1"<<"\n";
    }
}