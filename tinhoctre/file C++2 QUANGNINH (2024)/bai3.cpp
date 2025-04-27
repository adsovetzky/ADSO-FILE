#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int n, answer=INT_MAX, fakeanswer=INT_MIN;
    cin>>n;
    while(n--){
        string s;
        cin>>s;

        for(char x : s){
            if(x>='0' && x<='9'){
                fakeanswer=min(fakeanswer, (int)(x-'0'));
            }
            else if(x>='A' && x<='F'){
                answer=min(answer, (int)(x-'A'+10));
            }
        }
    }
    cout<<answer;
}