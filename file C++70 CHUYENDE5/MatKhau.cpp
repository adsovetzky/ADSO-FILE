#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("MatKhau.inp","r",stdin);
    freopen("MatKhau.out","w",stdout);
    string s;
    cin>>s;

    s="#"+s;

    vector<int> chucai(s.size(),0), chuinhoa(s.size(),0), chuso(s.size(),0);

    for(int i=0;i<s.size();i++){
        if(s[i]>='A' && s[i]<='Z') chuinhoa[i]=chuinhoa[i-1]+1;
        else chuinhoa[i]=chuinhoa[i-1];
        if(s[i]>='a' && s[i]<='z') chucai[i]=chucai[i-1]+1;
        else chucai[i]=chucai[i-1];
        if(isdigit(s[i])) chuso[i]=chuso[i-1]+1;
        else chuso[i]=chuso[i-1];
    }
    for(int i=0;i<s.size();i++){
        int meow=lower_bound(chucai.begin()+i+8, chucai.end(), chucai[i]+i)-chucai.begin();
        int nya=lower_bound(chuinhoa.begin()+i+8, chuinhoa.end(), chuinhoa[i]+i)-chuinhoa.begin();
        int bark=lower_bound(chuso.begin()+i+8, chuso.end(), chuso[i]+i)-chuso.begin();
        int chill=max(max(max(chill,meow),nya),bark);

        cout<<meow<<" "<<nya<<" "<<bark<<endl;
        if(chill>s.size()) break;

    }
}