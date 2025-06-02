#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr); cout.tie(nullptr);
  long long n, SoTuiCanPhaiMua, SoTuiHienTai = 0, TongSoTien = 0, MINN = INT_MAX; cin >> n;
  SoTuiCanPhaiMua = n * 3;
  vector<long long> a(n);

  for(long long i = 0; i < n; i++){
    cin >> a[i];
    MINN = min(MINN, a[i]);
  }
  for(auto x : a){
    if(x == MINN){
      TongSoTien += x * (SoTuiCanPhaiMua - SoTuiHienTai);
      break;
    } else{
      TongSoTien += x * 3;
      SoTuiHienTai += 3;
    }
  }
  cout << TongSoTien;
}
