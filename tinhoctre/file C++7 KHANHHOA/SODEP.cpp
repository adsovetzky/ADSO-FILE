#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    long long n;
    cin>>n;

    vector<long long> a(n);
    a[1] = 5;
    a[2] = 8;
    for(long long i=3;i<=n;i++){
        if(i%2==1){
            a[i] = a[i/2]*10 + 5;
        }
        else{
            a[i] = a[i/2-1]*10 + 8;
        }
    }
    cout<<a[n];
}