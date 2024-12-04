#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n,d,k,x1,y1,x2,y2,ans=0;

    cin>>m>>n>>d>>k;

    vector<vector<char>> a(m,vector<char> (n));
    vector<pair<int,int>> pushM,pushP;
    vector<vector<int>> dem(m,vector<int>(n,0));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
            if(a[i][j]=='M') pushM.push_back({i,j});
            if(a[i][j]=='P') pushP.push_back({i,j});
        }
    }
//    for(int i=0;i<m;i++){
//        for(int j=0;j<n;j++){
//            cout<<a[i][j]<<" ";
//        }cout<<endl;
//    }
    for(auto meow:pushP){
        x1=meow.first;
        y1=meow.second;
        for(auto nya:pushM){
            x2=nya.first;
            y2=nya.second;
            if(dem[x1][y1]==k) break;
            if (abs(x2 - x1) <= d and abs(y2 - y1) <= d) dem[x1][y1]++;
        }
        if(dem[x1][y1]==k) ans++;
    }
    cout<<ans<<endl;
//    for(int i=0;i<m;i++){
//        for(int j=0;j<n;j++){
//            cout<<dem[i][j]<<" ";
//        }cout<<endl;
//    }
//    for(auto x:pushM){
//        cout<<x.first<<" : "<<x.second<<endl;
//    }cout<<endl;
//    for(auto x:pushP){
//        cout<<x.first<<" : "<<x.second<<endl;
//    }
}
