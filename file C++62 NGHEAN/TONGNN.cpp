#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("TONGNN.INP","r",stdin);
    freopen("TONGNN.OUT","w",stdout);

    int UCLN,BCNN,x,y,k,MIN=INT_MAX;
    
    vector<pair<int,int>> adso;

    cin>>UCLN>>BCNN;
    if(BCNN%UCLN==0) k=BCNN/UCLN;
    else{cout<<-1;return 0;}
    for(int i=1;i<=sqrt(k);i++){
        if(k%i==0){
            MIN=min(MIN,(k/i)*UCLN+(i)*UCLN);
            adso.push_back({k/i,i});
        }
    }
    cout<<MIN;
}