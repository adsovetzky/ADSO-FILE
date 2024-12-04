#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,MAXNEST=0,MAXNOW=0;

    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        MAXNOW += a[i];
        if(MAXNOW > MAXNEST){
            MAXNEST = MAXNOW;
        }
        if(MAXNOW < 0){
            MAXNOW = 0;
        }
//        cout<<MAXNEST<<":"<<MAXNOW<<" ";
//    }    cout<<endl<<MAXNEST;
    return 0;
}
