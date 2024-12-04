#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("CT.INP","r",stdin);
    freopen("CT.OUT","w",stdout);

    int n,tong=0,tongreal=INT_MIN;

    cin>>n;

    vector<int> a;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x%2!=0){
            tong+=x;
            a.push_back(x);
        }
        else tong+=x;
    }
    if(tong%2==0) {cout<<tong/2;return 0;}
    else{
        for(int i=0;i<a.size();i++)
            tongreal=max(tong-a[i],tongreal);
    }
    cout<<tongreal/2;
}