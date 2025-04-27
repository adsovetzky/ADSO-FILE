#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n,thua=0, sum=0;
    cin>>n;
    map<int,int> mp;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    for(auto x : mp){
        if(x.second > 1){
            thua+=(x.second*(x.second-1))/2;
        }
    }
    sum=(n*(n-1))/2;
    cout<<sum-thua;
}