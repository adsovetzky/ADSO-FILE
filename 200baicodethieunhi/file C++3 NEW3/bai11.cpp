#include<bits/stdc++.h>
using namespace std;
int main(){
    long long TC;
    cin >> TC;
    while(TC--){
        int T,Q,L,Tuan=0,Quan=0;
        cin >> T >> Q >> L;
        while(L!=1){
            if(T%L!=0&&Q%L!=0){
                L--;
            }
            else if(T%L==0&&Q%L!=0){
                T--; Tuan ++;
            }
            else{
                Q--; Quan++;
            }
        }
        cout << Tuan << " " << Quan << endl;
    }
}