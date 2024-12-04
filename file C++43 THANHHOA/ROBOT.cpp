#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("ROBOT.INP","r",stdin);
    freopen("ROBOT.OUT","w",stdout);
    int x1,y1,x2,y2;

    cin>>x1>>y1>>x2>>y2;
    int dx=abs(x2-x1);
    int dy=abs(y2-y1);
    cout<<max(dx,dy);
}