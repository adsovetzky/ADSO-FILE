#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n,k,p;

    cin>>n>>k>>p;
    
    long long AdsoSoHandsome = (n*k+(k+1)-1)/(k+1);

    cout<<AdsoSoHandsome*p<<endl;
}