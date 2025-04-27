#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    string str="";

    while(str!="*"){
        cin>>str;
        if(str=="*") break;
        else{
            string str1=str[0];
            for(int i=0;i<str.size();i++){
                for(int j=i;j<str.size();i++){
                    if(str1.find(str[i])!=string::npos){
                        break;
                    else{
                        
                    }
                }
            }
        }
    }
}