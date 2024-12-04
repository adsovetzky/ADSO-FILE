#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,L,R;

    cin>>n;

    vector<int> a(n);
    vector<int> ans(m,0);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>L>>R;
        auto it1=lower_bound(a.begin(),a.end(),L)-a.begin();
        auto it2=upper_bound(a.begin(),a.end(),R)-a.begin();
        ans[i]=it2-it1;
    }
    for(int i=0;i<m;i++){
        cout<<ans[i]<<endl;
    }
}
