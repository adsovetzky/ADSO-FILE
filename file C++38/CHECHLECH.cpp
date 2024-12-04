#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,maxx=INT_MIN,minn=INT_MAX;
    char s;
    map<char,int> mp;

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        mp[s]++;
    }
    for(auto x:mp){
        maxx=max(maxx,x.second);
        minn=min(minn,x.second);
    }
    if(maxx==minn) cout<<0;
    else cout<<maxx-minn;
}
