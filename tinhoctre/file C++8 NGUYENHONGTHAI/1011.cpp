#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int h,m;
    cin >> h >> m;
    if(m<45){
        m+=15;
        h--;
        if(h<0) h=23;
    }
    else m-=45;
    cout<<h<<" "<<m;
}