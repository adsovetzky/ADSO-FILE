#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int n; cin >> n;
    string s; cin >> s;
    
    vector<string> names = {
        "vaporeon", "jolteon", "flareon", "espeon",
        "umbreon", "leafeon", "glaceon", "sylveon"
    };
    for(auto& name : names){
        if(name.size() != n){
            continue;
        }
        bool match = true;
        for(int i = 0;i < n; i++){
            if(s[i] != '.' && s[i] != name[i]){
                match = false;
                break;
            }
        }
        if(match){
            cout << name;
            break;
        }
    }
}
