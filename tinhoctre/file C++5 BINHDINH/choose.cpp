#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin>>a;
    string s;
    cin >> s;
    int n = s.size();
    stack<int> st;
    vector<int> dp(n, 0);
    long long total = 0;

    for (int i = 0; i < n; ++i) {
        char c = s[i];
        if (c == '(' || c == '[' || c == '{') {
            st.push(i);
        } else {
            if (!st.empty()) {
                char open = s[st.top()];
                if ((open == '(' && c == ')') ||
                    (open == '[' && c == ']') ||
                    (open == '{' && c == '}')) {
                    int pos = st.top();
                    st.pop();
                    dp[i] = i - pos + 1;
                    if (pos > 0 && dp[pos - 1] > 0) {
                        dp[i] += dp[pos - 1];
                    }
                    total += dp[i] / 2;
                } else {
                    while (!st.empty()) st.pop();
                }
            }
        }
    }

    cout << total << endl;
}
