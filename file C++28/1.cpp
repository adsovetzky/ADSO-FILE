#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int n,k=0,ans=0;
    cin>>n;
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        cin>>b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for(int i=0;i<n;i++){
        auto it=lower_bound(a.begin(),a.end(),b[i]);
        if(it!=a.begin()&&it!=a.end()){
            ans++; a.erase(it);
        }
    }
    cout<<ans;
}
