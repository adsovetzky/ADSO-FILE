#include<bits/stdc++.h>
using namespace std;

const int MAXN=1e6;
int n,m,u,v;

vector<bool> visited;
vector<vector<int>> a;
vector<vector<int>> ansreal;

void DFS(int u, vector<vector<int>>& a, vector<bool>& visited, vector<int>& ans){
    visited[u]=true;
    ans.push_back(u);

    for(int v:a[u]){
        if(!visited[v]){
            DFS(v,a,visited,ans);
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("CEO.INP","r",stdin);
    freopen("CEO.OUT","w",stdout);

    

    cin>>n>>m;

    visited.resize(n,false);
    a.resize(n);

    for(int i=0;i<m;i++){
        cin>>u>>v;
        u--;
        v--;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    for(int i=0;i<n;i++){
        if(!visited[i]){
            vector<int> ans;
            DFS(i,a,visited,ans);
            ansreal.push_back(ans);
        }
    }
    cout<<ansreal.size()<<endl;
    for(const auto& meow:ansreal){
        for(int u:meow){
            cout<<u+1<<" ";
        }cout<<endl;
    }
}