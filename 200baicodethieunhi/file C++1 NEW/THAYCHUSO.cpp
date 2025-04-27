#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    freopen("THAYCHUSO.inp","r",stdin);
    freopen("THAYCHUSO.out","w",stdout);
    
    int n;
    cin>>n;
    
    while(n--){
        string T;
        cin>>T;
        if(T.find('0') != string::npos){
            for(auto x:T){
                if(x=='0'){
                    cout<<'5';
                }
                else cout<<x;
            }
            cout<<"\n";
        }
        else cout<<T<<"\n";
    }
    return 0;
}