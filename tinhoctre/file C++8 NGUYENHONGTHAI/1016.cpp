#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    long long a1,a2,a3,b1,b2,b3;
    cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;
    long long ans = 0;
    ans += a1 + a2 + a3;
    b1 = b1 - a1;
    b2 = b2 - a2;
    if(b1 < 0){
        a1 = abs(b1);
        b1 = 0;
    }
    else{
        a1 = 0;
    }
    if(b2 < 0){
        a2 = abs(b2);
        b2 = 0;
    }
    else{
        a2 = 0;
    }
    if(a1 > 0 && b3 > 0){
        b3 -= a1;
        if(b3 < 0){
            a1 = abs(b3);
            b3 = 0;
        }
    }
    if(a2 > 0 && b3 > 0){
        b3 -= a2;
        if(b3 < 0){
            a2 = abs(b3);
            b3 = 0;
        }
    }
    cout << ans - (b1 + b2 + b3) + a3;
}