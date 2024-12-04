#include<bits/stdc++.h>
using namespace std;
long long demle(long long a, long long b){
    long long dau,cuoi;
    if(a%2 == 0) dau=a+1; else dau = a;
    if(b%2 == 0) cuoi=b-1; else cuoi = b;
    if(dau>b || cuoi<a) return 0;
    else return ((b-a)/2)+1;
}
long long chan6k4(long long a,long long b){
    long long dau = ceil((a-6)/12);
    long long cuoi = floor((b-6)/12);
    if(dau>b || cuoi<a) return 0;
    return ((12*(cuoi-1)+6)-(12*(dau-1)+6))/12+1;
}
long long demchanreal(long long a, long long b){
    long long chieudai = (b-a)+1;
    return chieudai-demle(a,b)-chan6k4(a,b);
}
int main()
{
    long long a,b;

    cin>>a>>b;
    cout<<demle(a,b)<<" "<<chan6k4(a,b)<<" "<<demchanreal(a,b)<<endl;
    cout<<demle(a,b)+(chan6k4(a,b)*3)+(demchanreal(a,b)*2);
}
