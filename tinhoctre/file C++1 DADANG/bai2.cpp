#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    string s1,s2,s3;
    cin>>s1>>s2;
    for(char x : s2){
        if(x == 'R'){
            s3 = s1[s1.size()-1];
            s1.pop_back();
            s1 = s3 + s1;
        }
        else{
            s3 = s1[0];
            s1.erase(0,1);
            s1 = s1 + s3;
        }
    }
    cout<<s1;
}