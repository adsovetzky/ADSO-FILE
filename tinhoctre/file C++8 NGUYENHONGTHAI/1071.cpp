#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin>>n;
    vector<long long> a(n),d(n,0);   
    for(long long i=0;i<n;i++){
        cin>>a[i];
    }
    for(long long i=1;i<n;i++){
        if(a[i-1]<=a[i]){
            d[i]=d[i-1]+1;
        }
        else d[i]=1;
    }
    cout<<*max_element(d.begin(),d.end())<<endl;
}