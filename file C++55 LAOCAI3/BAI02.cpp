#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("BAI02.INP","r",stdin);
    freopen("BAI02.OUT","w",stdout);

    string s;
    int sum=0;

    cin.ignore();
    getline(cin,s);
    for(char x:s){
        if(isdigit(x)){
            int meow=x-'0';
            sum+=meow;
        } 
    }
    if(sum%2==0) cout<<"Hard"<<sum;
    else cout<<"Easy"<<sum;
}