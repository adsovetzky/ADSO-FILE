#include<bits/stdc++.h>
using namespace std;

long long TinhSoRobotDuocTaoRa(long long K){
    long long Kfake;

    while(Kfake > 0){
        if(Kfake / 5 - 2 == 0){
            K += 9 * (Kfake / 5) + 3;
            break;
        }
        else if(Kfake / 5 - 3 == 0){
            K += 9 * (Kfake / 5) + 5;
            break;
        }
        else if(Kfake / 5 - 3 > 0){
            K += 9 * (Kfake / 5);
            Kfake /= 5;
        }
        else{
            
        }
    }
    return K;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr); cout.tie(nullptr);
    long long K, Kfake,  N, count = 1; cin >> K >> N;
    
    for(long long i = 1; i < N; i++){
        Kfake = K;
        if(count == 1){
            
        }
    }
}