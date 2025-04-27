#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    long long n; cin >> n;
    string str; cin >> str;

    if(str.size() > n) cout << "Impossible";
    else{
        long long sum = 0;
        for(char& x : str){
            sum += x - 96;
        }
        cout << sum;
    }
}