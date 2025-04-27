#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int T; cin >> T;
    while(T--){
        int k; cin >> k;
        string S; cin >> S;
        map<int, int> mp;
        for(char& x : S){
            mp[x]++;
        }
            if(mp.size() != k){
                cout << "No"<<endl;
            }
            else{
                cout << "Yes"<<endl;
            }
    }
}