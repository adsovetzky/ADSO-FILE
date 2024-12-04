#include<bits/stdc++.h>
using namespace std;
string tong(string s){
    int sum=0;
    for(char x:s){
        int meow=x-'0';
        sum+=meow;
    }
    string t=to_string(sum);
    if(t.size()!=1){
        return tong(t);
    }
    return t;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("CAU1.INP","r",stdin);
    freopen("CAU1.OUT","w",stdout);
    int t;
    
    cin>>t;
    while(t--){
        string n;
        cin>>n;
        cout<<tong(n)<<endl;
    }
}