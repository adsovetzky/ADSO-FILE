#include <bits/stdc++.h>
using namespace std;

int n,k,u,v,w;
vector<int> t;
vector<long long> d;
vector<long long> snt;
vector<vector<pair<int,int>>> graph;

void DFS1(int u, int cha, vector<vector<pair<int,int>>>& graph, vector<int>& t,vector<long long>& d, vector<long long>& snt){
    snt[u]=t[u];
    for (auto &meow : graph[u]) {
        int v = meow.first;
        int w = meow.second;
        if(v != cha){
            DFS1(v,u,graph,t,d,snt);
            snt[u]+=snt[v];
            d[u]+=d[v] + snt[v] * w;

        }
    }
}
void DFS2(int u,int cha, vector<vector<pair<int,int>>>& graph,vector<long long>& d, vector<long long>& snt){
    for(auto &meow : graph[u]){
        int v = meow.first;
        int w = meow.second;
        if(v != cha){
            d[v] = d[u] - snt[v] * w + (snt[1] - snt[v]) * w;
            DFS2(v,u,graph,d,snt);
        }
    }
}
int main() {
    cin>>n>>k;

    graph.resize(n + 1);
    t.resize(n+1,0);
    d.resize(n+1,0);
    snt.resize(n+1,0);

    for (int i=0;i<n-1;i++) {
        cin>>u>>v>>w;
        graph[u].emplace_back(v, w);
        graph[v].emplace_back(u, w);
    }
    for(int i=1;i<=n;i++){
        cin>>t[i];
    }

    DFS1(1,-1,graph,t,d,snt);
    for(auto a:snt){
        cout<<a<<" ";
    } cout<<endl;
    for(auto a:d){
        cout<<a<<" ";
    }cout<<endl;
    DFS2(1,-1,graph,d,snt);
    cout<<"DFS2:"<<" "<<endl;
    for(auto a:d){
        cout<<a<<" ";
    }cout<<endl;
    auto GTLN=max_element(d.begin()+1,d.end());
    auto GTNN=min_element(d.begin()+1,d.end());
    cout<<*GTNN<<" "<<*GTLN<<" ";
    if(k<*GTLN) cout<<"NO";
    else if(k>*GTLN) cout<<"GOOD";
    else if(k==*GTLN) cout<<"YES";
    return 0;
}
