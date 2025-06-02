#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr); cout.tie(nullptr);
  string So = "12345678", DoiCho;
  cin >> DoiCho;
  for(char x : DoiCho) {
    if(x == 'R') {
      So = So[So.size() - 1] + So;
      So.erase(So.size() - 1, 1);
    } else{
      So = So + So[0];
      So.erase(0, 1);
    }
  }
  cout << So;
  return 0;
}
