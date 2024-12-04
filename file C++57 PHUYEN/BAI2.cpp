#include<bits/stdc++.h>
using namespace std;

int dx[4]={0,0,-1,1};
int dy[4]={-1,1,0,0};

bool CHECKVAR(int x, int y, int rows, int cols){
    return x>=0&&x<rows&&y>=0&&y<cols;
}
void BFS(int x,int y,vector<vector<char>>& meow, vector<vector<bool>>& visited){
    queue<pair<int,int>> q;
    q.push({x,y});
    visited[x][y]=true;

    while(!q.empty()){
        auto [a,b]=q.front();
        q.pop();
        for(int i=0;i<4;i++){
            int nx=a+dx[i];
            int ny=b+dy[i];
            if(CHECKVAR(nx,ny,meow.size(),meow[0].size())&&!visited[nx][ny]&&meow[nx][ny]=='x'){
                visited[nx][ny]=true;
                q.push({nx,ny});
            }
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("BAI2.INP","r",stdin);
    freopen("BAI2.OUT","w",stdout);

    vector<vector<char>> meow;

    int sum=0;
    string s;

    while(getline(cin,s)){
        if(s.empty()){
            break;
        }
        vector<char> row(s.begin(), s.end());
        meow.push_back(row);
    }

    int rows=meow.size();
    int cols=meow[0].size();

    vector<vector<bool>> visited(rows, vector<bool>(cols,false));

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(meow[i][j]=='x'&&!visited[i][j]){
                BFS(i,j,meow,visited);
                sum++;
            }
        }
    }
    cout<<sum<<endl;
    //for(int i=0;i<meow.size();i++){
    //    for(int j=0;j<meow[i].size();j++){
    //        cout<<meow[i][j]<<" ";
    //    }cout<<endl;
    //}
}