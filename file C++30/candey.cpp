#include<bits/stdc++.h>
using namespace std;
int main()
{
    int_fast64_t n,a,b;
    cin>>n>>a>>b;
        int x=n/(a+b);
        int y=n%(a+b);
        cout<<x*a+y<<" "<<n-(x*a+y);
    return 0;
}