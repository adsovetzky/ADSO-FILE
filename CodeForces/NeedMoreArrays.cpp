#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr); cout.tie(nullptr);

    int n; cin >> n;
    while(n--){
        int m; cin >> m;
        vector<int> a(m);
        for(int i = 0; i < m; i++) cin >> a[i];

        int ans = 0;
        for(int i = 0; i < m; i++){
            if(a[i] == 1) ans++;
            else if(i > 0 && a[i] == a[i-1]) ans++;
        }
        
        cout << ans << "\n";    
    }
}