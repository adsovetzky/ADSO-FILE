#include<bits/stdc++.h> 
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    vector<int> a(n),Ai(n),Aj(n),Ak(n);
    
    for(int i=0;i<n;i++){
        cin >> a[i];
        Ai[i] = max(Ai[i-1],3 * a[i]);
    }
    for(int j=1;j<n;j++){
        Aj[j] = max(Aj[j-1],Ai[j-1]+(2 *a[j]));
    }
    for(int k=2;k<n;k++){
        Ak[k] = max(Ak[k-1],Aj[k-1]+(-5 * a[k]));
    }
    cout<<Ak[n-1];
}