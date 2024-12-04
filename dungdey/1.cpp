#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    vector<string> s(n);
    map<string,int> mp;

    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>s[i];
        mp[s[i]]++;
    }

}
