#include<bits/stdc++.h>
using namespace std;

vector<int> buildLPS(const string &s){
    int m=s.size();
    vector<int> lps(m,0);
    int len=0,i=1;

    while(i<m){
        if(s[i]==s[len]){
            len++;
            lps[i]=len;
            i++;
        }
        else{
            if(len!=0){
                len=lps[len-1];
            }
            else{
                lps[i]=0;
                i++;
            }
        }
    }
    return lps;
}

int KMP(const string &s, const string &t){
    vector<int> lps=buildLPS(s);
    int n=t.size(),m=s.size();
    int i=0,j=0,count=0;

    while(i<n){
        if(t[i]==s[j]){
            i++;
            j++;
        }
        if(j==m){
            count++;
            j=lps[j-1];
        }
        else if(i<n&&t[i]!=s[j]){
            if(j!=0){
                j=lps[j-1];
            }
            else i++;
        }
    }//you really still here XD?
    //OH IT WORKED! nice :D
    return count;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("cstring.inp","r",stdin);
    freopen("cstring.out","w",stdout);
    string s,t;

    cin>>s>>t;
    cout<<KMP(s,t)<<endl;

    return 0;
}