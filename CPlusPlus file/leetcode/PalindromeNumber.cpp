#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr); cout.tie(nullptr);
  string s, u; cin >> s; u = s;
  reverse(s.begin(), s.end());
  if(s == u) cout << "true";
  else cout << "false";
  return 0;
}
