#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    long long n,a,b;

    cin>>n>>a>>b;

    cout<<n/(a/gcd(a,b)*b);
}