#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n,sum=0;
    cin>>n;

    for(int i = 0; i < n ; i++){
        int x; cin>>x;
        if(x<5) continue;
        else if(x > 5 && x <= 10) sum+=6;
        else if(x>10 && x<=15) sum+=15;
        else if(x>=60) sum += 24;
        else sum+=30;
    }
    cout<<sum<<"0000";
}