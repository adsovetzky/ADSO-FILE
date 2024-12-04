#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("MATMA.INP","r",stdin);
    freopen("MATMA.OUT","w",stdout);
    int d=0;
    string s;

    cin>>s;
    if(count(s.begin(),s.end(),'0')==0){
        cout<<"-1"; return 0;
    }
    int x=stoi(s);
    while(x!=0){
        d+=x%10;
        x/=10;
    }
    if(d%3!=0){
        cout<<"-1"; return 0;
    }
    sort(s.begin(),s.end(),greater<int>());
    cout<<s;
}