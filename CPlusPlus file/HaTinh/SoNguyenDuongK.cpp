#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr); cout.tie(nullptr);
  
  long long n; cin >> n;
  cout << (-1 + sqrt(1 + 8 * n)) / 2;
}
