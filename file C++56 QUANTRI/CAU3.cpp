#include<bits/stdc++.h>
using namespace std;
bool CHECKVAR(string s,string t){
    if(s.size()!=t.size()) return false;
    else{
        for(int i=0;i<s.size();i++){
            if(s[i]!=t[i]&&s[i]!='?') return false;
        }
    }
    return true;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("CAU3.INP","r",stdin);
    freopen("CAU3.OUT","w",stdout);
    string s,t;
    int n;

    cin>>s;
    cin>>n;
    while(n--){
        cin>>t;
        if(CHECKVAR(s,t)) cout<<1<<endl;
        else cout<<0<<endl;
    }
}