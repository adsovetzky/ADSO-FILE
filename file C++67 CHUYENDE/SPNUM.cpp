#include<bits/stdc++.h>
using namespace std;

// Hàm tính tổng các chữ số của một số
int sum_of_digits(long long x) {
    int sum = 0;
    while (x > 0) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

// Hàm phân tích thừa số nguyên tố của một số
vector<long long> factorize(long long x) {
    vector<long long> prime_factors;
    for (long long d = 2; d * d <= x; ++d) {
        while (x % d == 0) {
            prime_factors.push_back(d);
            x /= d;
        }
    }
    if (x > 1) prime_factors.push_back(x);
    return prime_factors;
}

// Hàm tìm số đặc biệt nhỏ nhất lớn hơn N
long long find_special_number(long long N) {
    long long M = N + 1;
    while (true) {
        // Tính tổng chữ số của M
        int sum_digits_M = sum_of_digits(M);

        // Phân tích thừa số nguyên tố của M
        vector<long long> prime_factors = factorize(M);

        // Tính tổng chữ số của các thừa số nguyên tố
        int sum_digits_factors = 0;
        for (long long p : prime_factors) {
            sum_digits_factors += sum_of_digits(p);
        }

        // Kiểm tra điều kiện
        if (sum_digits_M == sum_digits_factors) {
            return M; // Tìm được số đặc biệt
        }

        // Thử số tiếp theo
        ++M;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("SPNUM.INP","r",stdin);
    freopen("SPNUM.OUT","w",stdout);
    // Đọc input từ file (nếu cần) hoặc nhập trực tiếp
    long long N;
    cin >> N;

    // Tìm số đặc biệt
    long long result = find_special_number(N);

    // Xuất kết quả
    cout << result << endl;

    return 0;
}
