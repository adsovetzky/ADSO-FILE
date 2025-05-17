#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr); cout.tie(nullptr);

    long long n, q; cin >> n;
 
    vector<pair<long long, long long>> N;
    for(long long i = 0; i < n; i++){
        long long a, b;
        cin >> a >> b;
        N.push_back({a,b});
    }
    sort(N.begin(), N.end(), [](const pair<int, int>& a, const  pair<int, int>& b) {
        return a.second > b.second;
    });

    cin >> q;

    for(long long i = 0; i < q; i++){
        long long x, y;
        cin >> x >> y;
    }

}