#include<bits/stdc++.h>
using namespace std;
long long a,b,ans=0;
int tonguoc(int k){
    for(int i=1;i<=sqrt(k);i++)
            if(k%i==0){
                if(i==k/i){
                    ans+=i;
                }
                else{
                    ans=ans+i+k/i;
                }
            }
        cout<<ans;
}
int main()
{

    cin>>a>>b;
    if(b%3==0){
        int k=__gcd(a,b/3);
        tonguoc(k);
    }
    else
        cout<<0;
}
