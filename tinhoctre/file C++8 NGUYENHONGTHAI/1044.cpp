#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
        string s1,s2;
        cin >> s1 >> s2;
        map<int,int> thongke;
        for(int i=0;i<s1.size();i++){
            thongke[s1[i]]++;
        }
        for(int i=0;i<s2.size();i++){
            thongke[s2[i]]--;
        }
        bool check=true;
        for(auto i:thongke){
            if(i.second<0){
                check=false;
                break;
            }
        }
        if(check) cout<<"POSSIBLE";
        else cout<<"IMPOSSIBLE";
}