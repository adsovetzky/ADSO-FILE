#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("practice.inp","r",stdin);
    freopen("practice.out","w",stdout);
    int n,k,count=0;

    cin>>n>>k;

    vector<pair<int,int>> de;

    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        de.push_back({a,b});
    }
    sort(de.begin(),de.end());
    for(auto x:de){
        if(x.first<=k){
            count++; k+=x.second;
        }
    }
    cout<<count;
    return 0;
}