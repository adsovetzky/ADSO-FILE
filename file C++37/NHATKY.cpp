#include<bits/stdc++.h>
using namespace std;
string s;
int main()
{
//    freopen("NHATKY.INP","r",stdin);
//    freopen("NHATKY.OUT","w",stdout);
    int n,t,k,a=0,minn-INT_MAX,maxx=INT_MIN;
    map<int,int> mp;
    string meow="";
    vector<int> r;

    cin>>n;
    cin.ignore();
    getline(cin,s);
    cin>>t;
    cout<<s<<endl;

    for(int i=0;i<s.size();i++){
        if(s[i]=='-'&&s[i+1]>='0'&&s[i+1]<='9'||s[i]>='0'&&s[i]<='9'){
            meow+=s[i];
        }
        else{
            long long adso=atoll(u.c_str());
            a.push_back()=adso;
            minn=min(minn,adso);
            maxx=max(maxx,adso);
            meow="";
        }
    }
    for(int i=minn;i<=maxx;i++){
        if()
    }
//    for(int i=0;i<s.size();i++){
//        if(s[i]>='0' and s[i]<='9'){
//                k=i;a++;
//            while(s[k]>='0' and s[k]<='9'){
//                meow[a]=meow[a]+s[k];k++;
//            }
//            i=k;
//        }
//        if(s[i]=='-'){
//            if(s[i+1]>='0' and s[i+1]<='9'){
//            k=i+1;a++;
//            meow[a]='-';
//                while(s[k]>='0' and s[k]<='9'){
//                    meow[a]=meow[a]+s[k];k++;
//                }
//                i=k;
//            }
//        }
//    }
//    for(int i=1;i<=sizeof(meow);i++){
//        cout<<meow[i]<<" ";
//    }cout<<endl;
//    for(int i=1;i<=sizeof(meow);i++){
//        int x=atoll(meow[i].str());
//        mp[x]++;
//    }
//    for(auto x:mp){
//        cout<<x.first<<" "<<x.second;
//    }
}

