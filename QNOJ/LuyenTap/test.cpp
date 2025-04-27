#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int k; cin >> k;
    string v; cin >> v;

    if (k == 1) {
        reverse(v.begin(), v.end());
    }

    map<char, int> cnt;
    for (char c : v) {
        cnt[c]++;
    }

    char extra = 0;
    for (auto [c, t] : cnt) {
        if (t % 2 != 0) { // ký tự xuất hiện lẻ lần -> chính là ký tự thêm vào
            extra = c;
            break;
        }
    }

    cout << extra << '\n';

    bool removed = false;
    for (char c : v) {
        if (c == extra && !removed) {
            removed = true;
            continue;
        }
        cout << c;
    }
}
