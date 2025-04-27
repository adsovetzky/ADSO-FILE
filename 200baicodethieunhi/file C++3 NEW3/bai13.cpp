#include<bits/stdc++.h>
using namespace std;

const int MAXN = 1e6;

vector<long long> a(MAXN);

void solve(int n){
    a[1] = 4;
    a[2] = 7;
    for(int i = 3; i <= n; i++){
        if(i % 2 == 1){
            a[i] = a[i/2]*10 + 4;
        }
        else{
            a[i] = a[i/2-1]*10 + 7;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    
    long long T;
    cin >> T;
    while(T--){
        int n;
        cin>>n;
        solve(n);
        cout << a[n] << endl;
        //1 = 4, 2 = 7, 3 = 44, 4 = 47, 5 = 74, 6 = 77, 7 = 444, 8 = 447, 9 = 474, 10 = 477, 11 = 744, 12 = 747, 13 = 774, 14 = 777, 15 = 4444, 16 = 4447, 17 = 4474, 18 = 4477, 19 = 4744, 20 = 4747, 21 = 4774, 22 = 4777, 23 = 7444, 24 = 7447, 25 = 7474, 26 = 7477, 27 = 7744, 28 = 7747, 29 = 7774, 30 = 7777
        
    }
}