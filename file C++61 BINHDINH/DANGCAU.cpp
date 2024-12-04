#include<bits/stdc++.h>
using namespace std;

vector<long long> ayo(1001);

void CHECKVAR(){
    for(int i=1;i<=9;i++){
        ayo[i]=ayo[i-1]+1;
    }
    for(int i=10;i<=99;i++){
        string s=to_string(i);
        if(s[0]==s[1]) ayo[i]=ayo[i-1]+11;
        else ayo[i]=ayo[i-1]+10;
    }
    for(int i=100;i<=999;i++){
        string s=to_string(i);
        if(s[0]==s[1]&&s[1]==s[2]) ayo[i]=ayo[i-1]+111;
        else if(s[0]==s[2]) ayo[i]=ayo[i-1]+101;
        else if(s[1]==s[2]) ayo[i]=ayo[i-1]+100;
        else if(s[0]==s[1]) ayo[i]=ayo[i-1]+110;
        else if(s[0]!=s[1]&&s[1]!=s[2]) ayo[i]=ayo[i-1]+102;
    }
    ayo[1000]=ayo[999]+1000;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("DANGCAU.INP","r",stdin);
    freopen("DANGCAU.OUT","w",stdout);
    CHECKVAR();
    int n,sum=0;

    cin>>n;
    cout<<ayo[n];
}