#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr); cout.tie(nullptr);
    long long T; cin >> T;
    while(T--){
        long long n; cin >> n;
        if(n == 6){
            cout << 1 <<endl;
        }
        else if(n == 2){
            cout << 5 << endl;
        }
        else if(n == 1){
            cout << 6 << endl;
        }
        else if(n == 5){
            cout << 2 << endl;
        }
        else if(n == 3){
            cout << 4 << endl;
        }
        else if(n == 4){
            cout << 3 << endl;
        }
    }
}