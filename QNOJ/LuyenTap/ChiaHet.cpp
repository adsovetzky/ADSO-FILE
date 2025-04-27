#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr); cout.tie(nullptr);
    long long n, a, b; cin >> n >> a >> b;
    long long sum = 0;
    while(a <= n || b <= n){
        a *= a;
        b *= b;
        sum += 2;
    }
    cout << sum << endl;
}