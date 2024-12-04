#include<bits/stdc++.h>
using namespace std;

bool check(long long a){
    set<long long> meoww;
    long long a1=a;
    while(a>0){
        long long b = a%10;
        meoww.insert(b);
        //if(b==0 or a1%b!=0) return false;
        a/=10;
    }
    for(int i=0;i<meoww.size();i++){
        if(meoww[i]==0 or a1%meoww[i]=0) return false;
    }
    return true;
    meoww.clear();
}
int main()
{
    long long n,tong=0;

    cin>>n;

    vector<long long> a(n);
    vector<long long> meow;

    for(long long i=0;i<n;i++){
        cin>>a[i];
        if(check(a[i])==true){
            meow.push_back(a[i]);
        }
    }
    cout<<meow.size()<<endl;
    for(auto &x:meow){
        cout<<x<<" ";
    }
}
