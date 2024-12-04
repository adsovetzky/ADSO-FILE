#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("1448.inp","r",stdin);
    freopen("1448.out","w",stdout);
    int n;

    cin>>n;

    vector<pair<int,int>> inp(n);

    for(int i=0;i<n;i++){
        int u,v,z;
        cin>>u>>v>>z;
        inp[u].push_back({v,z});
        inp[v].push_back({u,z});
    }
}