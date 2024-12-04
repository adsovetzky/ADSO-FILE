#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("BAI2.INP","r",stdin);
    freopen("BAI2.OUT","w",stdout);

    int n,k,ans=0;
    string s,u="";

    cin>>n;
    cin.ignore();
    getline(cin,s);
    cin>>k;

    map<long long, long long> mp;

    for(int i=0;i<s.size();i++){
        if(s[i]=='-'&&i+1<s.size()&&s[i+1]>='0'&&s[i+1]<='9'||s[i]>='0'&&s[i]<='9') u+=s[i];
        else if(!u.empty()){
            long long meow=atoll(u.c_str());
            mp[meow]++;
            u="";
        }
    }
    if(!u.empty()){
        long long meow=atoll(u.c_str());
        mp[meow]++;
        u="";
    }
    for(auto x:mp){
        long long adso=k-x.first;
        if (x.first == adso) {
            ans+=(mp[x.first]*(mp[x.first]-1))/2;
        }
        else if (mp.find(adso)!=mp.end()&&x.first<adso) {
            ans+=mp[x.first]*mp[adso];
        }
    }
    cout<<ans;
}