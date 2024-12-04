#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("3.inp","r",stdin);
    freopen("3.out","w",stdout);

    int m,n,q;

    cin>>m>>n>>q;

    vector<int>h(m+1.0);
    vector<int>c(n+1,0);

    int cnt=0;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            int tmp;
            cin>>tmp;
            h[i]=max(h[i],tmp);
            c[j]=max(c[j],tmp);
        }
    }
    map<int,bool> mp_h;
    map<int,bool> mp_c;

    for(int i=1;i<h.size();i++) mp_h[h[i]]=true;
    for(int i=1;i<c.size();i++){
        int tmp=c[i];
        mp_c[tmp]=true;
        if(mp_h[tmp]==true&&mp_c[tmp]==true){
            cnt++;
        }
    }
    while(q--){
        int r,cl,x;
        cin>>r>>cl>>x;
        int m_h=h[r];
        int m_c=c[cl];
        if(h[r]<x){
            if(mp_h[m_h]==true&&mp_c[m_h]==true) cnt--;
            mp_h[m_c]=false;
            mp_h[x]=true;
        }
        if(c[cl]<x){
            if(mp_c[m_c]==true&&mp_h[m_c]==true) cnt--;
            mp_c[m_c]=false;
            mp_c[x]=true;
            c[cl]=x;
            if(mp_h[x]==true&&mp_c[x]==true) cnt++;
        }
        cout<<cnt<<endl;
    }
}