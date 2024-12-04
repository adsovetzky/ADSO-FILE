#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("FRIENDNUM.INP","r",stdin);
    freopen("FRIENDNUM.OUT","w",stdout);
    long long n,m,adso=0;
    cin >> n;
    //vector<int> a(n);
    map<long long,long long> mp;
    for(int i=0;i<n;i++){
        cin>>m;
        if(m%3==0) adso++;
        else mp[m%3]++;
    }
    cout<<(adso*(adso-1)/2)+(mp[1]*mp[2]);
}
