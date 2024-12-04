#include<bits/stdc++.h>
using namespace std;

map<char,int> mp1;
map<char,int> mp2;

int main(){
    freopen("STICKER.INP","r",stdin);
    freopen("STICKER.OUT","w",stdout);
    string s,t;
    int ans=INT_MAX;

    cin>>s>>t;
    for(int i=0;i<s.size();i++){
        if(s[i]=='2' or s[i]=='5'){
            mp1['2']++;
            mp1['5']++;
        }
        else if(s[i]=='6' or s[i]=='9'){
            mp1['6']++;
            mp1['9']++;
        }
        else{
            mp1[s[i]]++;
        }
    }
    for(int i=0;i<s.size();i++){
        mp2[t[i]]++;
    }
    for(auto x:mp2){
        if(mp1[x.first]>=mp2[x.first]){
            ans=min(ans,mp1[x.first]/mp2[x.first]);
        }
    }
    cout<<ans;
}
