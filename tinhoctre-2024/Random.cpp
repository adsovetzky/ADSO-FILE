#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    long long K; cin >> K;
    vector<long long> a(K);
    map<long long, long long> mp;

    for(long long i = 0; i < K; i++){
        cin >> a[i]; mp[a[i]]++;
    }
    long long sum = K*(K-1)/2;
    for(auto x : mp){
        if(x.second > 1){
            sum -= x.second*(x.second-1)/2;
        }   
    }
    cout << sum << endl;
}