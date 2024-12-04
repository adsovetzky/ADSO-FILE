#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);
    int n;

    cin>>n;
    map<string,int> mp;
    for(int i=1;i<=n;i++){
        string s;
        cin>>s;
        mp[s]++;
        if(mp[s]!=1) cout<<s<<mp[s]-1<<endl;
        else cout<<s<<endl;
    }
}