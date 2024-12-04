#include<bits/stdc++.h>
using namespace std;

const int MAXN=1e6;

int d[MAXN];
bool visited[MAXN];
vector<pair<int,int>> inp[MAXN];
int sum=0;

void DFS(int u){
    visited[u]=true;
    for(auto[v,w]:inp[u]){
        if(!visited[v]){
            sum+=w;
            DFS(v);
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("1445.inp","r",stdin);
    freopen("1445.out","w",stdout);
    int n;

    cin>>n;

    for(int i=0;i<n-1;i++){
        int u,v,k;
        cin>>u>>v>>k;
        inp[u].push_back({v,k});
        inp[v].push_back({u,k});
    }
    DFS(1);
}