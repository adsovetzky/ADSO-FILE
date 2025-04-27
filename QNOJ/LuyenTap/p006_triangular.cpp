#include<bits/stdc++.h>
using namespace std;

vector<bool> Tamgiac((int)1e7 + 1, 0);

void SangTamGiac(){
    Tamgiac[1] = 1;
    for(long long i = 3; i <= 1e7; i += i + 1){
        Tamgiac[i] = 1; 
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr); cout.tie(nullptr);

    SangTamGiac();

    long long T; cin >> T;
    while(T--){
        long long N; cin >> N;
        if(Tamgiac[N]) cout << 1 << endl;
        else cout << 0 << endl;
    }
}