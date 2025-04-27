#include<bits/stdc++.h>
using namespace std;
long long tinhtong(string s){
    long long sum=0;
    for(char i:s){
        int adso = i - '0';
        sum+=adso;
    }
    return sum;
}

int main(){
    ios_base::sync_with_stdio(0);
    freopen("bai9.inp","r",stdin);
    freopen("bai9.out","w",stdout);
    long long t;
    string s;
    cin>>t;
    while(t--){
        cin>>s;
        while(s.size()!=1){
            s = to_string(tinhtong(s));
        }
        cout<<s<<"\n";
    }
}