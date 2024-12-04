#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("BAI3.INP","r",stdin);
    freopen("BAI3.OUT","w",stdout);

    int t;

    unordered_map<char,int> mp;

    cin>>t;
    
    while(t--){
        string s;
        char meow;
        cin>>s;
        for(char x:s){
            mp[x]++;
        }
        
    }
}