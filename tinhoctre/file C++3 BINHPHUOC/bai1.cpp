#include<bits/stdc++.h>
using namespace std;

long long BCNN(long long x, long long y) {
    return x / __gcd(x, y) * y; // Tránh tràn số
}


pair<long long, long long> rutgon(pair<long long, long long> ans) {
    long long UCLN = __gcd(ans.first, ans.second);
    ans.first /= UCLN;
    ans.second /= UCLN;
    return ans;
}
pair<long long, long long> tinhtong(pair<long long, long long> ans, long long x, long long y) {
    long long BCNNREAL = BCNN(ans.second, y);
    ans.first = ans.first * (BCNNREAL / ans.second) + x * (BCNNREAL / y);
    ans.second = BCNNREAL;
    return rutgon(ans);
}

void realrutgon(pair<long long, long long> ans) {
    if (ans.first % ans.second == 0) {
        cout << ans.first / ans.second;
    } else if (ans.first > ans.second) {
        cout << ans.first / ans.second << " " << ans.first % ans.second << "/" << ans.second;
    } else {
        cout << ans.first << "/" << ans.second;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    freopen("bai1.inp", "r", stdin);
    freopen("bai1.out", "w", stdout);

    long long n, x, y;
    cin >> n;
    pair<long long, long long> ans = {0, 1};

    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        ans = tinhtong(ans, x, y);
    }

    realrutgon(ans);
}
