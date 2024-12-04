#include<bits/stdc++.h>
using namespace std;

int n,m,k;

vector<vector<int>> a;
vector<vector<int>> s;

void sum(){
    s.resize(m+1,vector<int>(n+1,0));
    for(int i=1;i<=m;++i){
        for(int j=1;j<=n;++j){
            s[i][j]=a[i-1][j-1]+s[i-1][j]+s[i][j-1]-s[i-1][j-1];
        }
    }
}
bool can_buy(int area){
    for(int r1=1;r1<=m;++r1){
        for(int r2=r1;r2<=m;++r2){
            for(int c1=1;c1<=n;++c1){
                for(int c2=c1;c2<=n;++c2){
                    int tongtien=s[r2][c2]-s[r1-1][c2]-s[r2][c1-1]+s[r1-1][c1-1];
                    int current_area=(r2-r1+1)*(c2-c1+1);
                    if(tongtien<=k&&current_area>=area){
                        return true;
                    }
                }
            }
        }
    }
    return false;
}
int CHECKVAR(){
    int l=1,r=m*n;
    int ans=0;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(can_buy(mid)){
            ans=mid;
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    return ans;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("BAI3.INP","r",stdin);
    freopen("BAI3.OUT","w",stdout);

    cin>>m>>n>>k;
    a.resize(m,vector<int>(n));

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    sum();
    //for(int i=0;i<=m;++i){
    //    for(int j=0;j<=n;++j) cout<<s[i][j]<<" ";
    //    cout<<endl;
    //}
    int max_area=CHECKVAR();
    cout<<max_area<<endl;
}