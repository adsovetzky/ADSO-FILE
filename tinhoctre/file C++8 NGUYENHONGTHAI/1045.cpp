#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    cin.ignore();
    vector<string> rules(2*n);
    //cin string
    for(int i=0;i<2*n;i++){
        string str;
        getline(cin,str);
        rules[i]=str;
    }
    string real_str;
    getline(cin,real_str);
}