#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    long long a,b,c,d;
    cin >> a >> b >> c >> d;
    if(d < b){
        cout << a <<endl;
    }
    else{
        cout << a + (d - b) * c << endl;
    }
}