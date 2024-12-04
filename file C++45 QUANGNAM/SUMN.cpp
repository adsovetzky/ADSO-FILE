#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("SUMN.INP","r",stdin);
    freopen("SUMN.OUT","w",stdout);
    string s;
    long long tong=0;

    cin>>s;
    for(int i=0;i<s.size();i++){
        int MEOW=s[i]-'0';
        tong+=MEOW;
    }
    cout<<tong;
}