#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr); cout.tie(nullptr);
    string s; cin >> s;
    long long sum = 0;
    for(char& c : s){
        sum += c - '0';
    }
    if(sqrt(sum) == floor(sqrt(sum)))
        cout << "Yes";
    else
        cout << "No";
}
