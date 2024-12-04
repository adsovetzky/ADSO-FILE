#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9 + 7;
struct guards {
    int start, end, cost;
};
struct note {
    
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("GALLERY.INP","r",stdin);
    freopen("GALLERY.OUT","w",stdout);
    int n, m;
    cin >> n >> m;
    vector<MEOW> ads(m);
    for (int i = 0; i < m; ++i) {
        cin >> ads[i].start >> ads[i].end >> ads[i].cost;
    }
    sort(ads.begin(), ads.end(), [](const MEOW &a, const MEOW &b) {
        return a.end < b.end;
    });
    vector<int> dp(n + 1, INF);
    dp[0] = 0;
    for (const auto &i : ads) {
        for (int t = i.end; t >= i.start; --t) {
            dp[t] = min(dp[t], dp[i.start] + i.cost);
        }
    }
    if (dp[n] == INF)
        cout << -1;
    else
        cout << dp[n];
}