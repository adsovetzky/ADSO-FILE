#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    long long n, m = 1, power_of_two = 2; 
    cin >> n;
    while(power_of_two <= n) {
        power_of_two *= 2;
        m++;
    }
    cout << m - 1 << " " << n - (power_of_two / 2) << endl;   
}