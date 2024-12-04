#include<bits/stdc++.h>
using namespace std;
const int MAXN=1000000;
int kytu;
string BIT[MAXN+1];
string meow(int n,string s){
    string a,b;
    int ans=0;
    BIT[0]='0';
    BIT[1]='1';
    for(int i=2;i<=n;i++){
        BIT[i]=BIT[i-2]+BIT[i-1];
    }
}
int main()
{
    string s,fibonachi="";
    int n,ans;

    cin>>s;
    cin>>n;
    meow(n,s);
//    for(int i=0;i<=n;i++){
//        cout<<BIT[i]<<" ";
//    }
//    fibonachi=BIT[n];
//    while((kytu=fibonachi.find(s,kytu))!=-1){
//            ans++;
//        if(fibonachi.find(s,kytu+1)!=-1){
//            kytu++;
//        }
//        else
//            kytu+=s.size();
//    }
    cout<<ans;
}
