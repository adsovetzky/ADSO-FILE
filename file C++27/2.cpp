#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans=INT_MIN,dem=1;
    string a;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        for(int j=1;j<=a.size();j++){
            if(a[j]==a[j-1]){
                dem++;
            }
            else{
                ans=max(ans,dem);
                dem=1;
            }
        }
    }
    cout<<ans;
}
