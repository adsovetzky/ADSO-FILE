#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,ans;

    cin>>n;
    int a=n/5;
    int x=n%5;
    int b=x/3;
    int y=x%3;
    int c=y/2;
    int z=y%2;
    if(z>0){
        ans=a+b+c+1;
    }
    else ans=a+b+c;
    cout<<ans;
}
