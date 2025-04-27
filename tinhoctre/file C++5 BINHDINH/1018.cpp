#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    long long Area, Perimeter;
    cin >> Area >> Perimeter;
    double delta = pow(Perimeter/2.0,2) - 4*Area;
    double SqrtDelta = sqrt(delta);
    if(delta < 0|| SqrtDelta != floor(SqrtDelta)){
        cout << -1;
        return 0;
    }
    else{
    cout << ceil((Perimeter/4) + sqrt(delta) / 2) <<
     " " << ceil((Perimeter/4) - sqrt(delta) / 2);
    }
}