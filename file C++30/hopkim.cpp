#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1000000;
int d[MAXN + 1], s[MAXN + 1];
bool songuyento[MAXN + 1];

void sang() {
    memset(songuyento, true, sizeof(songuyento));
    songuyento[0] = songuyento[1] = false;

    for (int p = 2; p * p <= MAXN; ++p) {
        if (songuyento[p]) {
            for (int i = p * p; i <= MAXN; i += p) {
                songuyento[i] = false;
            }
        }
    }
    for (int i = 1; i <= MAXN; ++i) {
        d[i] = d[i - 1] + (songuyento[i] ? 1 : 0);
        s[i] = s[i - 1] + (songuyento[i] ? i : 0);
    }
}

int main() {
    sang();

    int n;
    cin >> n;

    while (n--) {
        int a, b;
        cin >> a >> b;

        int dem = d[b]-d[a-1];
        int prime_sum = s[b]-s[a-1];

        if (dem == 0) {
            cout << "0 0.00\n";
        } else {
            double trungbinh = static_cast<double>(prime_sum) / prime_count;
            cout << dem << " " << fixed << setprecision(2) << trungbinh << "\n";
        }
    }

    return 0;
}
