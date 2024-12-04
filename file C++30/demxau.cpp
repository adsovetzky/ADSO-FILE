#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("demxau.inp","r",stdin);
    freopen("demxau.out","w",stdout);
    string s,t;
    int ans=0,kytu=0;
    cin>>s>>t;
    while((kytu=t.find(s,kytu))!=-1){
            ans++;
        if(t.find(s,kytu+1)!=-1){
            kytu++;
        }
        else
            kytu+=s.size();
    }
    cout<<ans;
}
