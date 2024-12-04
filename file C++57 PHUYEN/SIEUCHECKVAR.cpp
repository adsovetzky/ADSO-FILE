#include<bits/stdc++.h>
using namespace std;

int dx[4]={-1,1,0,0};
int dy[4]={0,0,1,-1};

bool CHECKVAR(int row, int col, int rowreal, int colreal, vector<vector<char>> meow, vector<vector<bool>> visited){
    return row>=0&&row<rowreal&&col>=0&&col<colreal&&meow[row][col]=='x'&&!visited[row][col];
}
void DFS(int row, int col, int rowreal, int colreal, vector<vector<char>>& meow, vector<vector<bool>>& visited){

    visited[row][col]=true;

    for(int i=0;i<4;i++){
        int nx=row+dx[i];
        int ny=col+dy[i];
        if(CHECKVAR(nx,ny,rowreal,colreal,meow,visited)){
            visited[nx][ny]=true;
            DFS(nx,ny,rowreal,colreal,meow,visited);
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("BAI2.INP","r",stdin);
    freopen("BAI2.OUT","w",stdout);

    int sum=0;
    string s;

    vector<vector<char>> meow;

    while(getline(cin,s)){
        if(s.empty())
            break;
        vector<char> row(s.begin(),s.end());
        meow.push_back(row);
    }
    int rows=meow.size();
    int cols=meow[0].size();

    vector<vector<bool>> visited(rows,vector<bool>(cols,false));

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(meow[i][j]=='x'&&!visited[i][j]){
                DFS(i,j,rows,cols,meow,visited);
                sum++;
            }
        }
    }
    cout<<sum;
}