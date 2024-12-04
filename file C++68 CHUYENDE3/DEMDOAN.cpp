#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("DEMDOAN.INP","r",stdin);
    freopen("DEMDOAN.OUT","w",stdout);
    int n;
    
    cin>>n;

    vector<int> sum(n+1);

    for(int i=1;i<=n;i++)
    {
        sum[i]=sum[i-1]+i;
    }

}