#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr); cout.tie(nullptr); 
  long long L, R; cin >> L >> R;
  cout << int(sqrt(R) - sqrt(L) + 1);
}
