#include <bits/stdc++.h>
using namespace std;

int n, k, u, v, weight;
int GTNN = INT_MAX, GTLN = INT_MIN;
vector<int> student;
vector<vector<pair<int, int>>> graph;
vector<bool> visited;

void DFS(int i, int current_cost, int current_students) {
    visited[i] = true;  // Đánh dấu điểm hiện tại đã thăm
    current_students += student[i];  // Cộng thêm số học sinh ở điểm hiện tại

    bool is_leaf = true;  // Biến để kiểm tra nếu điểm này là điểm lá (điểm đích)
    for (auto &[v, weight] : graph[i]) {
        if (!visited[v]) {
            is_leaf = false;  // Nếu có đỉnh con chưa thăm, đây không phải là điểm lá
            int new_cost = current_cost + current_students * weight;
            DFS(v, new_cost, current_students);  // Tiếp tục DFS từ điểm v
        }
    }

    // Nếu là điểm lá, cập nhật chi phí nhỏ nhất và lớn nhất
    if (is_leaf) {
        GTNN = min(GTNN, current_cost);
        GTLN = max(GTLN, current_cost);
    }

    visited[i] = false;  // Quay lui, đánh dấu điểm i là chưa thăm
}

int main() {
    cin >> n >> k;

    graph.resize(n);
    student.resize(n);
    visited.resize(n, false);

    // Nhập các cạnh của đồ thị
    for (int i = 0; i < n - 1; i++) {
        cin >> u >> v >> weight;
        u--; v--;  // Đổi về chỉ số từ 0
        graph[u].push_back({v, weight});
        graph[v].push_back({u, weight});
    }

    // Nhập số học sinh tại mỗi điểm
    for (int i = 0; i < n; i++) {
        cin >> student[i];
    }

    // Chạy DFS từ điểm đầu tiên (điểm 0)
    DFS(0, 0, 0);  // Bắt đầu với chi phí là 0 và tổng số học sinh là 0

    // In kết quả
    cout << GTNN << " " << GTLN << " ";
    if (k < GTLN) cout << "NO";
    else if (k > GTLN) cout << "GOOD";
    else cout << "YES";

    return 0;
}
