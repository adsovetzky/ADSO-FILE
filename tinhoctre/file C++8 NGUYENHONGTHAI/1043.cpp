#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    unordered_map<char, int> mp = {
        {'A',2}, {'B',2}, {'C',2},
        {'D',3}, {'E',3}, {'F',3},
        {'G',4}, {'H',4}, {'I',4},
        {'J',5}, {'K',5}, {'L',5},
        {'M',6}, {'N',6}, {'O',6},
        {'P',7}, {'Q',7}, {'R',7}, {'S',7},
        {'T',8}, {'U',8}, {'V',8},
        {'W',9}, {'X',9}, {'Y',9}, {'Z',9}
    
    };
    string str; cin >> str;
    long long sum = str.size();

    for(int i = 0;i < str.size(); i++){
        sum += mp[str[i]];
    }
    cout << sum;
}