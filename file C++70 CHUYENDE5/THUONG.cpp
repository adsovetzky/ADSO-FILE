#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("THUONG.INP","r",stdin);
    freopen("THUONG.OUT","w",stdout);
    string s,t,t2;
    int n;

    cin>>s;
    s="@"+s;
    cin>>n;
    while(n--){
        int l,r;
        cin>>l>>r;
        t2=t=s.substr(l,r-l+1);
        reverse(t.begin(),t.end());
        if(t2==t) cout<<1<<"\n";
        else cout<<-1<<"\n";
    }
}