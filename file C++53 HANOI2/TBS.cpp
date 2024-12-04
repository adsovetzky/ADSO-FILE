#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("TBS.INP","r",stdin);
    freopen("TBS.OUT","w",stdout);
    
    int countam=0,countduong=0;
    vector<double> a(4);

    cin>>a[0]>>a[1]>>a[2]>>a[3];
    for(int i=0;i<4;i++){
        if(a[i]==0) {cout<<'0';return 0;}
        else{
            if(a[i]<0) countam++;
        }
    }
    if(countam==2) cout<<'1';
    else cout<<"-1";
}