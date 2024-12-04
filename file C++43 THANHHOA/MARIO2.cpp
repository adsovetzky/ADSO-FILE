#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base:: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("MARIO.INP","r",stdin);
    freopen("MARIO.OUT","w",stdout);

    int n,x,k;

    cin>>n>>x>>k;

    vector<pair<int,int>> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i].first>>a[i].second;
    }

    sort(a.begin(),a.end());

    int MAXREAL=0, MAXNOW=0,L=0;

    for(int R=0;R<n;R++){
        MAXNOW+=a[R].second;
        while ((a[R].first-a[L].first)>k||abs(a[R].first-x)>k){
            MAXNOW-=a[L].second;
            L++;
        }

    MAXREAL=max(MAXREAL,MAXNOW);
    }

    cout<<MAXREAL<<endl;
}