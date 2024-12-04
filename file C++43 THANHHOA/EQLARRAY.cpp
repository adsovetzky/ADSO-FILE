#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("EQLARRAY.INP","r",stdin);
    freopen("EQLARRAY.OUT","w",stdout);
    int q,n,k;

    cin>>q;
    while(q!=0){
        cin>>n>>k;

        vector<int> b(n);

        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        sort(b.begin(),b.end(),greater<int>());
        while(b[k-1]>0){
            for(int i=0;i<k;i++) b[i]=b[i]-b[k-1];
                sort(b.begin(),b.end(),greater<int>());
                //for(auto x:b){
                //  cout<<x<<" ";
                //}cout<<endl;
        }
        if(b[0]==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        q--;
    }
}