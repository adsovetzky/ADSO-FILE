#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr); cout.tie(nullptr);
    long long n, k; cin >> n >> k;
    vector<long long> a(k), t(k);

    for(long long i = 0; i < k; i++) cin >> a[i];
    for(long long i = 0; i < k; i++) cin >> t[i];


    for(long long m = 1; m <= n; m++){
        long long MIN = LLONG_MAX;
        for(long long i = 0; i < k; i++){
            MIN = min(MIN, (t[i] + abs(a[i] - m)));
            // cout << a[i] << " " << t[i] << endl;
            // cout << t[i] + abs(a[i] - m) << " ";
        }
        // cout << endl;
        cout << MIN << " ";
        // cout << endl;
    }
}