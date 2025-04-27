#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,a2=0,a3=0;
    cin >> n;
    while(n>0){
        if(n-2==0){
            a2++;
            break;
        }
        if(n-3>=0){
            n-=3;
            a3++;
        }
        else if(n-3<0){
            n+=3;
            a3--;
            a2=n/2;
            break;
        }
    }
    cout<<a2<<" "<<a3;
}
