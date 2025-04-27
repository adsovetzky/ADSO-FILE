#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    long long m,p;
    long long n;
    cin>>m>>p;
    for(long long i=0;i<4;i++){
        cin>>n;
        cout<<n-(m*p)<<" ";
    }
    cin>>n;
    cout<<n-(m*p);
}