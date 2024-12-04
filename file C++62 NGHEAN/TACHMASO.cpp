#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("TACHMASO.INP","r",stdin);
    freopen("TACHMASO.OUT","w",stdout);
    
    vector<pair<int,string>> vp;

    string s,u="";

    cin>>s;

    for(int i=0;i<s.size();i++){
        char c = s[i];
        if(isdigit(c)) u+=c;
        else if(c=='-'){
            if(!u.empty()){
                vp.push_back({stoi(u),u});
                u="";
            }
            u+=c;
        }
        else{
            if(!u.empty()){
                vp.push_back({stoi(u),u});
                u="";
            }
        }
    }
    if(!u.empty()) vp.push_back({stoi(u),u});
    sort(vp.begin(),vp.end());
    cout<<"\n";
    for(auto x:vp) cout<<x.second<<" ";
}