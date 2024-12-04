#include<bits/stdc++.h>
using namespace std;

pair<int,int> meow(int n, vector<int>& a, vector<int>& b){
    unordered_map<int,int> mp;
    int max_length=0;
    int max_sum=0;

    for(int i=0;i<n;++i){
        if(mp.find(a[i])!=mp.end()){
            int x=mp[a[i]];
            int chieudai=i-x;
            int maxnow=b[i+1]-b[x];
            if((chieudai>max_length)||(chieudai==max_length&&maxnow>max_sum)){
                max_length=chieudai;
                max_sum=maxnow;
            }
    }
    if(mp.find(a[i])==mp.end()) mp[a[i]]=i;

    }
    return make_pair(max_length+1, max_sum);
}
int main(){
    int n;

    cin>>n;

    vector<int> a(n);
    vector<int> b(n+1,0);

    for(int i=1;i<=n;i++){
        cin>>a[i];
        b[i+1]=b[i]+a[i];
    }
   pair<int,int> ans=meow(n,a,b);
   cout<<ans.first<<" "<<ans.second<<endl;
}
