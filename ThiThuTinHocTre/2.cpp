#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    string S,u,MAXCHECK, MAX; cin >> S;
    long long sum = 0, sum2, index;
    
    vector<long long> a;
    for(int i = 0; i < S.size(); i++){
        sum += S[i] - '0';
        a.push_back(S[i] - '0');
    }
    u = S; MAXCHECK = S;
    bool check = false;
    //while(u > MAX){
        for(int i = 0; i < a.size(); i++){
            if(a[i] == 0){
                continue;
            }
            else if((sum - a[i]) % 3 == 0){
                check = true;
                u = MAXCHECK;
                sum2 = sum - a[i];
                u.erase(i,1);
                // cout << "MAX: " << MAX << "| U: " << u << endl;
                if(MAX.size() < u.size()){
                    MAX = u;
                }
                else{
                    MAX = max(MAX,u);
                }
                // cout <<"MAX REAL: " << MAX << endl;
                index = i;
            }
        }
        // sum = sum2;
        // a[index] = 0;
        // MAXCHECK = MAX;
    //}
        if(check) cout << MAX;
        else cout << -1;
}