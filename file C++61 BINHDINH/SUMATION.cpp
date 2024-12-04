#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("SUMATION.INP","r",stdin);
    freopen("SUMATION.OUT","w",stdout);
    
    int n,a=INT_MAX;
    double sum=0,totalsum=0;

    cin>>n;

    vector<int> meow(n);
    vector<int> ads;

    priority_queue<int,vector<int>,greater<int>> p;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        p.push(x);
    }
    while(p.size()>1){
        sum=0;
        int a=p.top();
        p.pop();
        int b=p.top();
        p.pop();
        sum+=(a+b)*0.05;
        totalsum+=sum;
        p.push(a+b);
    }
    cout<<fixed<<setprecision(2)<<totalsum<<"\n";
}