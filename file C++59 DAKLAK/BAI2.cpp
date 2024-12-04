#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("BAI2.INP","r",stdin);
    freopen("BAI2.OUT","w",stdout);

    string s;
    
    map<char,int> mp;

    cin>>s;

    for(char x:s){
        if((x=='2'||x=='3'||x=='5'||x=='7')&&(mp.find(x)==mp.end())){
            mp[x]++;
            cout<<x<<" ";
        }
    }
}