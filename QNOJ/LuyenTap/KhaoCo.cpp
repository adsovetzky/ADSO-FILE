#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr); cout.tie(nullptr);

    int n; cin >> n;
    string s, s1, s2; cin >> s;
    s1 = s.substr(0, s.size()/2);
    s2 = s.substr(s.size()/2, s.size());

    map<char, int> mp1;
    map<char, int> mp2;

    for(char& x : s1) mp1[x]++;
    for(char& x : s2) mp2[x]++;

    // cout << s1 << " " << s2 << endl;

    for(auto& x : mp2){
        if(mp1.find(x.first) == mp1.end() || (mp1[x.first] < x.second && mp1[x.first] - x.second != 1)){
            s1 = s.substr(0, s.size()/2 + 1);
            s2 = s.substr(s.size()/2 + 1, s.size());
            mp1[x.first]++;
            mp2[x.first]--;
            // cout << x.first << endl;
            break;
        }
    }
    //test
    // cout << endl;
    // cout << s1 << " "  << s2 << endl;

    // for(auto& x : mp1){
    //     cout << x.first << " " << x.second << endl;
    // }
    // cout << endl;
    // for(auto& x : mp2){
    //     cout << x.first << " " << x.second << endl;
    // }
    // cout << endl;
    
    for(auto& x : mp1){
        if(mp1[x.first] > mp2[x.first] && mp1[x.first] - mp2[x.first] != 1){
            mp1[x.first]--;
            mp2[x.first]++;
            break;
        }
        else if(mp2[x.first] > mp1[x.first] && mp2[x.first] - mp1[x.first] != 1){
            mp1[x.first]++;
            mp2[x.first]--;
            break;
        }
    }



    //test
    // cout << endl;
    // cout << s1 << " "  << s2 << endl;

    // for(auto& x : mp1){
    //     cout << x.first << " " << x.second << endl;
    // }
    // cout << endl;
    // for(auto& x : mp2){
    //     cout << x.first << " " << x.second << endl;
    // }
    // cout << endl;

    for(auto& x : mp1){
        if(mp1[x.first] > mp2[x.first])
        {
            cout << x.first << endl;
            break;
        }
        else if(mp1[x.first] < mp2[x.first])
        {
            cout << x.first << endl;
            break;
        }
    }

    if(n == 1 && s2.size() < s1.size()){
        reverse(s2.begin(), s2.end());
        cout << s2;
    }
    else if(n == 1 && s2.size() >= s1.size()){
        reverse(s1.begin(), s1.end());
        cout << s1;
    }
    else{
        if(s1.size() > s2.size()){
            cout << s2;
        }
        else cout << s1;
    }
}