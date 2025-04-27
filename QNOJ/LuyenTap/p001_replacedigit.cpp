#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr); cout.tie(nullptr);
    long long n; cin >> n;
    while(n--){
        string s; cin >> s;
        for(long long i = 0; i < s.size(); i++){
            if(s[i] == '0'){
                s[i] = '5';
            }
        }
        cout << s << endl;
    }
}