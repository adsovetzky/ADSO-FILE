#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    long long n,tong=0;
    cin>>n;
    for(long long i=1;i<=n;i++){
        long long b;
        cin>>b;
        cout<<b*i-tong<<" ";
        tong+=b*i-tong;
    }
}