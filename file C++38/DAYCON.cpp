#include<bits/stdc++.h>
using namespace std;
vector<int> b;
bool ngto(int a){
    if(a==1||a==0) return false;
    for(int i=2;i<=sqrt(a);i++){
        if(a%i==0) return false;
    }
    return true;
}
int main(){
    int n,ans=0,ansreal=INT_MAX;

    cin>>n;
    vector<int> a(n);

    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(ngto(a[i])==true){
            b.push_back(i);
        }
    }
    for(int i=0;i<b.size();i++){
        if(i<b.size()-1){
            ans=b[i+1]-b[i]+1;
        ansreal=min(ansreal,ans);
        ans=0;
        }
        else break;
    }
    cout<<ansreal<<ansreal;
}
