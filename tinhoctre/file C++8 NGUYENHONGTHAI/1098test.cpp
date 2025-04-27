#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    // freopen("1098.inp","r",stdin);
    // freopen("1098.out","w",stdout);

    long long n; cin >> n;

    vector<string> nums;

    while (n--) {
        string s, temp = "";
        cin >> s;
        for (char c : s) {
            if (isdigit(c)) temp += c;
            else if (!temp.empty()) {
                while (temp.size() > 1 && temp[0] == '0') temp.erase(0, 1);
                nums.push_back(temp);
                temp.clear();
            }
        }
        if (!temp.empty()) {
            while (temp.size() > 1 && temp[0] == '0') temp.erase(0, 1);
            nums.push_back(temp);
        }
    }

    sort(nums.begin(), nums.end(), [](const string &a, const string &b) {
        return a.size() == b.size() ? a < b : a.size() < b.size();
    });

    for (auto &num : nums) cout << num << '\n';

}