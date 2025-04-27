#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    freopen("bracket.inp","r",stdin);
    freopen("bracket.out","w",stdout);

    long long n,dem=0;
    string str;

    cin>>n;
    cin>>str;

    stack<int> s;
    map<char,char> adso = {{')','('},{']','['},{'}','{'}};

    for(char c : str){
        if(c == '(' || c == '[' || c == '{'){
            s.push(c);
        }
        else{
            if(s.empty() || s.top() != adso[c]){
                s.pop();
            }
            else{
                    dem++;
                }
        }
    }
    cout<<dem;
}
