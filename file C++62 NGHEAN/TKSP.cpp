#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e6 + 1;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("TKSP.INP", "r", stdin);
    freopen("TKSP.OUT", "w", stdout);

    int n, k;
    cin >> n >> k;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> thongke(MAXN, 0);
    int left = 0, ans = 0;

    for (int right = 0; right < n; right++) {
        thongke[a[right]]++;
        while (thongke[a[right]] >= k) {
            ans += n - right;
            thongke[a[left]]--;
            left++;
        }
    }

    cout << ans << '\n';
    return 0;
}
