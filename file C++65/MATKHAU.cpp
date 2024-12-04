#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("MATKHAU.INP","r",stdin);
    freopen("MATKHAU.OUT","w",stdout);
    
    int MAX=INT_MIN,ans=0;
    string s;

    cin>>s;

    s='@'+s;

    vector<int> chucai(s.size(),0), chuinhoa(s.size(),0), so(s.size(),0);
    for(int i=1;i<s.size();i++){
        if(s[i]>='a' && s[i]<='z')
            chucai[i]=chucai[i-1]+1;
        else chucai[i]=chucai[i-1];
        if(s[i]>='A' && s[i]<='Z')
            chuinhoa[i]=chuinhoa[i-1]+1;
        else chuinhoa[i]=chuinhoa[i-1];
        if(isdigit(s[i]))
            so[i]=so[i-1]+1;
        else so[i]=so[i-1];
    }
    for(int i=0;i<s.size();i++){
        int meow=lower_bound(chucai.begin()+i+6,chucai.end(),chucai[i]+1)-chucai.begin();
        int nya=lower_bound(chuinhoa.begin()+i+6,chuinhoa.end(),chuinhoa[i]+1)-chuinhoa.begin();
        int bark=lower_bound(so.begin()+i+6,so.end(),so[i]+1)-so.begin();
        MAX=max(max(max(MAX,meow),nya),bark);
        if(MAX>=s.size()) break;
        ans+=s.size()-MAX;
    }
    cout<<ans;
}