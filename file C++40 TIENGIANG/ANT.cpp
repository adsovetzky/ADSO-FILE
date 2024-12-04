#include<bits/stdc++.h>
using namespace std;

const int SIU=1e8+7;
int n,m;

int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};

vector<vector<int>> a;
vector<vector<int>> b;
vector<vector<int>> c;

void BFS(){
    queue<pair<int,int>> q;
    q.push({1,1});
    b[1][1]=0;
    c[1][1]=1;
    while(!q.empty()){
        int x=q.front().first;
        int y=q.front().second;
        q.pop();

        for(int k=0;k<4;k++){
        int nx=x+dx[k];
        int ny=y+dy[k];
        if(nx>=1&&nx<=n&&ny>=1&&ny<=m&&a[nx][ny]==1){
            if(b[nx][ny]==-1){
                b[nx][ny]=b[x][y]+1;
                c[nx][ny]=c[x][y];
                q.push({nx,ny});
                }
            else if(b[nx][ny]==b[x][y]+1){
                c[nx][ny]=(c[nx][ny]+c[x][y])%SIU;
                }
            }
        }
    }
}
int main(){


    cin>>n>>m;

    a.assign(n+1,vector<int>(m+1));
    b.assign(n+1,vector<int>(m+1,-1));
    c.assign(n+1,vector<int>(m+1,0));

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            char ch;
            cin>>ch;
            a[i][j]=ch-'0';
        }
    }
    BFS();

    int meow=b[n][m];
    int nya=c[n][m];

    cout<<endl<<nya<<endl<<meow<<endl;
}
