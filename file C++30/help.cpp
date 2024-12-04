#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,tong=0;
    for(int i=1;i<=4;i++){
        cin>>a;
        tong+=a;
    }
    cout<<fixed<<setprecision(2)<<tong/4;
}
