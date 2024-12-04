#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("xanhdep.inp","r",stdin);
    freopen("xanhdep.out","w",stdout);
    int n;
    int MAX=INT_MIN;

    cin>>n;
    while(n--){
        int count=0;

        string s;
        cin>>s;
        
        for(int i=0;i<s.size();i++){
            if(s[i]==s[i-1]) count++;
            else MAX=max(MAX,count);
        }
    }
    cout<<MAX;
}