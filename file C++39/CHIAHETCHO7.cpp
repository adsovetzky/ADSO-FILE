#include<bits/stdc++.h>
using namespace std;
int tachso(string s){
    long long d=0,t,ans;

    for(int i=0;i<s.size();i++){
        if(s[i]!='?'){
            long long meow = s[i]-'0';
            d+=(i+1)*meow;
        }
        else t=i+1;
    }
    if(t!=1){
    for(int i=0;i<=9;i++){
            if((d+(i*t))%7==0){
                return i;
            }
            else return -1;
        }
    }
    else
    for(int i=1;i<=9;i++){

        if((d+(i*t))%7==0){
            return i;
        }
        else return -1;
    }
}
int main(){
    string s;
    long long d=0,t,ans;

    cin>>s;

    cout<<tachso(s);
}
