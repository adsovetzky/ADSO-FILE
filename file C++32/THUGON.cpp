#include<bits/stdc++.h>
using namespace std;

string s,t;

void meow(string s){

    string t="";
    int d=1;

    for(int i=0;i<s.size();i++){
        if(s[i]==s[i+1]) d++;
        else{
            if(d!=1){cout<<d<<s[i];d=1;}
            else {cout<<s[i];d=1;}
        }
    }
    cout<<endl;
}


int main()
{
    freopen("THUGON.INP","r",stdin);
    freopen("THUGON.OUT","w",stdout);
    while(getline(cin,s)){
        meow(s);
    }
}
