#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr); cout.tie(nullptr);

    long long n, d = 0; cin >> n;
    string s, u = ""; cin >> s;
    

    cout << s << endl;

    long long row = s.size() / n;

    for(long long i = 1; i <= n; i++){
        for(long long j = 0; j < row; j++){
            if(j % 2 == 0){
                u += s[i * n + j];
            }
            else{
                u += s[i * n + (n - 1 - j)];
            }
            cout << s[i * n + j] << " " << i * n + j << endl;
        }
    }
    // for(long long i = 1; i <=  n; i++){
    //     for(long long j = i; j < s.size(); j++){
    //         cout << s[j] << " " << j << endl;
    //         u += s[j];
    //         if(d == 0){
    //             d++;
    //             j += (n * 2) - 2;
    //         }
    //         else d--;
    //     }
    // }
    cout << u;
}