#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    freopen("SUBSTR.INP", "r", stdin);
    freopen("SUBSTR.OUT", "w", stdout);

    int k;
    string s;
    cin >> k >> s;

    unordered_map<int, int> prefix_count; // Đếm số lần xuất hiện của prefix_sum
    prefix_count[0] = 1; // Prefix sum ban đầu bằng 0 xuất hiện 1 lần

    int prefix_sum = 0;
    long long ans = 0;

    for (char c : s) {
        // Tính tổng prefix tại vị trí hiện tại
        prefix_sum += (c == '1' ? 1 : 0);

        // Nếu prefix_sum - k đã từng xuất hiện, nghĩa là tồn tại đoạn con có k số '1'
        if (prefix_count.find(prefix_sum - k) != prefix_count.end()) {
            ans += prefix_count[prefix_sum - k];
        }

        // Cập nhật số lần xuất hiện của prefix_sum hiện tại
        prefix_count[prefix_sum]++;
    }

    cout << ans << "\n";
    return 0;
}
