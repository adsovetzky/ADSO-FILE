#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n,k,sum=0;

    cin >> n >> k;

    vector<int> a(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    while(k--){
        sort(a.begin(),a.end(),greater<int>());
        if(a[0]==0) break;
        sum+=a[0];
        a[0]--;
    }
    cout<<sum;
}