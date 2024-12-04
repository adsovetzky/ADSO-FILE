#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("TIMKIEMNHIPHAN.INP","r",stdin);
    freopen("TIMKIEMNHIPHAN.OUT","w",stdout);
    
    int n,q;

    cin>>n;

    vector<int> a(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cin>>q;

    while(q--){
        int x;
        cin>>x;
        cout<<*lower_bound(a.begin(),a.end(),x)<<endl;
    }
}