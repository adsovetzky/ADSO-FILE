#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("ROBOT.INP","r",stdin);
    freopen("ROBOT.OUT","w",stdout);

    int n;

    cin>>n;

    vector<vector<int>> a(n,vector<int>(n)), b(n,vector<int>(n));
    vector<pair<int,int>> c;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    b[0][0]=a[0][0];
    for(int i=1;i<n;i++){
        b[i][0]=b[i-1][0]+a[i][0];
    }
    for(int i=1;i<n;i++){
        b[0][i]=b[0][i-1]+a[0][i];
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            b[i][j]=min(b[i-1][j],b[i][j-1])+a[i][j];
        }
    }
    cout<<b[n-1][n-1]<<"\n"<<1<<" "<<1<<"\n";
}