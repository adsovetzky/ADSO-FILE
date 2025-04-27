#include<bits/stdc++.h>
using namespace std;

vector<int> sangNguyenTo((int)1e5 + 1, 1);
vector<int> SoNguyenTo((int)1e5 + 1, 0);

void SangNguyenTo(){
    sangNguyenTo[0] = sangNguyenTo[1] = 0;

    for(int i = 2; i <= sqrt(1e5); i++){
        SoNguyenTo[i] = SoNguyenTo[i - 1];
        if(sangNguyenTo[i]){
            SoNguyenTo[i]++;
            for(int j = i * i; j <= 1e5; j += i){
                sangNguyenTo[j] = 0;
            }
        }
        
    }
}
int main(){
    SangNguyenTo();
    for(int i = 1; i <= 100; i++){
        cout << SoNguyenTo[i] << "| " << i << endl;
    }
    // int T; cin >> T;
    // while(T--){
    //     long long l, r; cin >> l >> r;
    //     cout << SoNguyenTo[r] - SoNguyenTo[l - 1] << endl;
    // }
}