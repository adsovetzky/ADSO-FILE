#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long a,b;
    cin >> a >> b;
    long long m = a + b, n = (int)sqrt(a+b);
    cout<<m/n<<" "<<n;
}