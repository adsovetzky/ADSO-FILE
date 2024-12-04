#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("SIGNAL.INP","r",stdin);
    freopen("SIGNAL.OUT","w",stdout);

    int n,k;

    cin>>n>>k;

    vector<char> a(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    while(k!=0){
        char MEOW=a.back();
        a.pop_back();
        a.insert(a.begin(),MEOW);
        k--;
    }
    for(auto x:a){
        cout<<x;
    }
}