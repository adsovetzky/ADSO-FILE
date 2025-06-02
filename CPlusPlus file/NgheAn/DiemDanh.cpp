#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr); cout.tie(nullptr);
  long long n; cin >> n;
  map<string, long long> DanhSach;
  
  for(long long i = 0; i < n; i++){
    string s; cin >> s;
    DanhSach[s]++;
  }
  for(long long i = 0; i < n - 1; i++){
    string s; cin >> s;
    DanhSach[s]--;
  }
  auto it = find_if(DanhSach.begin(), DanhSach.end(),
                    [](const pair<string, int>& p){
                    return p.second == 1;
                    });
  cout << it->first;
}
