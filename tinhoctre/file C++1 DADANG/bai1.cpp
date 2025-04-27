#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    double n;
    cin >> n;
    if(n==0 && n > 0.5) cout << 1;
    else if(n==0 && n < 0.5) cout << 0;
    else{
        int i = (int)n;
        if(n-i<=0.5) cout << (int)n;
        else{
            if(n-i>0.5) cout << i+1;
            else cout << i;
        }
    }
}