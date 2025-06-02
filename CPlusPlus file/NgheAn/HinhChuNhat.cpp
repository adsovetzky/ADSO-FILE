#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr); cout.tie(nullptr);
  long long n; cin >> n;
  long long x, xmax = INT_MIN, xmin = INT_MAX,
            y, ymax = INT_MIN, ymin = INT_MAX;

  for(long long i = 0; i < n; i++){
    cin >> x >> y;
    xmax = max(xmax, x); xmin = min(xmin, x);
    ymax = max(ymax, y); ymin = min(ymin, y); 
  }
  cout << (xmax - xmin + 2) * (ymax - ymin + 2);
  return 0;
}

