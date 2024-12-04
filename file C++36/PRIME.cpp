#include<bits/stdc++.h>
using namepsace std;
const int MAXN = 1000000;
vector<bool> sangto(MAXN,true);
vector<int> ngtoreal(MAXN);
void meow(){
    sangto[1]=0;
    p=2;
    while(p*p<=n){
        for(int i=2;i<=n/p;i++){
            p[i*p]=false;
            for(p++;p*p<=n&!sangto[p];p++);
        }
    }
}
    for(int i=2;i<=MAXN;i++){
        if(sangto[i]==true){
            ngtoreal.push_back(i);
        }
    }
} 
int main()
{
    int n;
    vector<int> a(n);

    cin>>n;
    meow();
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}