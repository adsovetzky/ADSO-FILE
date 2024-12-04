#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("MULT.INP","r",stdin);
    freopen("MULT.OUT","w",stdout);
    int n;

    cin>>n;

    while(n--){
        int n,k;
        cin>>n>>k;
        cout<<k/n<<"\n";
    }
}