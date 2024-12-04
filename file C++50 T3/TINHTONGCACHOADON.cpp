#include<bits/stdc++.h>
using namespace std;
string meow(string a,string b){
    string ans="";
    int nho=0;

    if(a.size()>b.size()) b.insert(0,a.size()-b.size(),'0');
    else a.insert(0,b.size()-a.size(),'0');
    for(int i=a.size()-1;i>=0;i--){
        int x=a[i]-'0'+b[i]-'0'+nho;
        if(x>9){
            x=x-10;
            nho=1;
        }
        else nho=0;
        ans.insert(0,1,x+'0');
    }
    return ans;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("TINHTONGCACHOADON.INP","r",stdin);
    freopen("TINHTONGCACHOADON.OUT","w",stdout);

    int n;
    string s,MEOW="0";

    cin>>n;
    while(n--){
        cin>>s;
        MEOW=meow(MEOW,s);
    }
    cout<<MEOW;
}