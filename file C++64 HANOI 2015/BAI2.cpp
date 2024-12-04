#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("BAI2.INP","r",stdin);
    freopen("BAI2.OUT","w",stdout);
    
    int n,m;

    cin>>n;

    vector<int> a(n);
    vector<pair<int,int>> giatri;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cin>>m;

    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        giatri.push_back({y,x});
    }
    sort(giatri.begin(),giatri.end());
    
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i]<=giatri[i].second) {
                count+=giatri[i].first;
                
            }
            break;
        }
        cout<<count<<endl;
    }
    cout<<count;
}