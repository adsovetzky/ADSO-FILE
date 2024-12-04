#include<bits/stdc++.h>
using namespace std;
const int MAXN=1000000;
vector<int> meow(MAXN);
void MEOWWWWWWWW(){
    for(int i=2;i<sqrt(MAXN);i++){
        for(int j=i;j<MAXN;j+=i){
            meow[j]++;
        }
    }
}
int main()
{
    int n,a,b,T;
    cin>>T;
    while(T>0){
    cin>>n>>a>>b;
    vector<vector<int>> c(a,vector<int>(b,0));
    vector<vector<int>> MEOW(a,vector<int>(b,0));
    vector<vector<int>> ans(a,vector<int>(b,0));

    MEOWWWWWWWW();

    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>c[i][j];
            MEOW[i][j]=meow[c[i][j]];
        }
    }
//    cout<<endl;
//    for(int i=0;i<a;i++){
//        for(int j=0;j<b;j++){
//            cout<<MEOW[i][j]<<" ";
//        } cout<<endl;
//    }
    ans[0][0]=MEOW[0][0];
    for(int i=1;i<a;i++){ans[i][0]=ans[i-1][0]+MEOW[i][0];}
    for(int j=1;j<b;j++){ans[0][j]=ans[0][j-1]+MEOW[0][j];}
    for(int i=1;i<a;i++){
        for(int j=1;j<b;j++){
            ans[i][j]=MEOW[i][j]+min(ans[i][j-1],ans[i-1][j]);
        }
    }
//    cout<<endl;
//    for(int i=0;i<a;i++){
//        for(int j=0;j<b;j++){
//            cout<<ans[i][j]<<" ";
//        } cout<<endl;
//    }
    cout<<ans[a-1][b-1];
    T--;
    }
}
