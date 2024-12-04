#include<bits/stdc++.h>
using namespace std;

const long long MAXN=10000000;

bool a[MAXN+1];
vector<long long> b;

void sang(){
    memset(a,true,sizeof(a));
    a[0]=a[1]=false;
    for(int i=2;i*i<=MAXN;i++){
        if(a[i]==true){
            for(int j=i*i;j<=MAXN;j+=i)
                a[j]=false;
        }
    }
    for(int i=2;i<=MAXN;i++){
        if(a[i]==true and i*i<1e9){
            b.push_back(i*i);
        }
    }
}
int main(){
    freopen("SDB.INP","r",stdin);
    freopen("SDB.OUT","w",stdout);

    int n,s;
    vector<int> ans(n);
    cin>>n;
    sang();
    sort(b.begin(),b.end());
    for(int i=1;i<=n;i++){
        cin>>s;
        long long it=*lower_bound(b.begin(),b.end(),s);
        ans.push_back(it);
    }
    for(auto x:ans){
        cout<<x<<" ";
}
}
