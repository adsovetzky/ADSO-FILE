#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int Number; cin >> Number;
    
    map<char, long long> ListOfName;

    for(int i = 0; i < Number; i++){
        string s; cin >> s;
        ListOfName[s[0]]++;
    }
    bool check = false;
    for(auto& x : ListOfName) if(x.second >= 5){
        check = true;
        cout << x.first;
    }
    if(!check) cout << "SURRENDER";
}