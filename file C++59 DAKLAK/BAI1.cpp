#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("BAI1.INP","r",stdin);
    freopen("BAI1.OUT","w",stdout);
    int n,count=0;

    cin>>n;

    vector<vector<int>> a(n,vector<int>(n));
    vector<int> checkrow;
    vector<int> checkcol;

    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            cin>>a[i][j];
            sum+=a[i][j];
        }
        checkrow.push_back(sum);
    }
    for(int j=0;j<n;j++){
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=a[i][j];
        }
        checkcol.push_back(sum);
    }
    for(int i=0;i<checkrow.size();i++){
        auto it=find(checkrow.begin(),checkrow.end(),checkcol[i]);
        if(it!=checkrow.end()){
            count++;
        }
    }
    cout<<count;
}