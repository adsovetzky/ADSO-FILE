#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int n, d=1; cin>>n;
    vector<string> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(), a.end(),greater<string>());
    for(int i=1;i<n;i++){
        string str1=a[i-1], str2=a[i];
        if(str1.find(str2)==-1 or str2[0]!=str1[0]){
            d++;
        }
    }
    cout<<d;
}