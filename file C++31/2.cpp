#include<bits/stdc++.h>
using namespace std;
const int MAXN=1000000;
bool songto[MAXN+1];
int d[MAXN+1],t[MAXN+1],n;
vector<int> a;
vector<int> meow;

void sang(int n){
    memset(d,0,sizeof(d));
    memset(t,0,sizeof(t));
    memset(songto, true, sizeof(songto));
    songto[0] = songto[1] = false;

    for (int p=2;p*p<=MAXN;++p) {
        if (songto[p]){
            for (int i=p*p;i<= MAXN;i+=p) {
                songto[i]=false;
            }
        }
    }
    for(int p=0;p<=n;p++){
        if(songto[p]==true){
            for(int i=0;i<n;++i){
                if(a[i]%p==0){
                    d[p]++;
                }
            }
        }
    }
    for(int p=2;p<=MAXN;p++){
        t[p]=t[p-1]+d[p];
    }
}
int main()
{

    int n,m,L,R;

    cin>>n;

    a.resize(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>m;
    sang(n);
//    for(int i=1;i<=11;i++){
//        cout<<songto[i]<<" ";
//    }cout<<endl;
//    for(int i=1;i<=11;i++){
//        cout<<d[i]<<" ";
//    }cout<<endl;
//    for(int i=1;i<=11;i++){
//        cout<<t[i]<<" ";
//    }cout<<endl;
    for(int i=0;i<m;i++){
        cin>>L>>R;
        int nya=t[R]-t[L-1];
    meow.push_back(nya);
    }
    for(auto& x:meow){
        cout<<x<<endl;
    }
}
