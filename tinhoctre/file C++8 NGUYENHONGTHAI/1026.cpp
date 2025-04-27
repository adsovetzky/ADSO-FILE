#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    long long k,n, mid, layer=1;
    cin >> k >> n;
    while(k > 0){
        long long half = (1LL << (k-1));
        if(n <= half){
            continue;
        }
        else{
            layer += half;
            n -= half;
        }
        k--;
    }
    cout << layer;
}