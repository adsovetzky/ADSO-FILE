#include<bits/stdc++.h>
using namespace std;

//lạy chúa...LET GOOOOOOO

//hàm tìm kiếm nhị phân để tìm vị trí đầu tien có giá trị >=x
int lower_bound(const vector<int>& a,int x){
    int left=0,right=a.size();
    while(left<right){
        int mid=left+(right-left)/2;
        if(a[mid]>=x) right=mid;
        else left=mid+1;
    }
    return left;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("MARIO.INP","r",stdin);
    freopen("MARIO.OUT","w",stdout);

    int n,x,k,MAXX=INT_MIN,MINN=INT_MAX;

    cin>>n>>x>>k;

    vector<pair<int,int>> nam(n);//tọa độ và sức mạnh của cây nấm
    vector<int> a(n);//tọa độ cây nấm
    vector<int> w(n);//sức mạnh cây nấm

    for(int i=0;i<n;i++){

        //cin>>a[i]>>w[i];
        cin>>nam[i].first>>nam[i].second;
        a[i]=nam[i].first;
    }

    sort(nam.begin(),nam.end());
    sort(a.begin(),a.end());
    
    vector<int> sum(n+1,0);

    for(int i=0;i<n;i++){
        sum[i+1]=sum[i]+nam[i].second;
    }

    int maxW=0;

    //tính tổng sức mạnh khi di chuyển từ X sang trái rồi sang phải <3!!!
    for(int i=0;i<n;i++){
        int left=abs(x-a[i]);
        if(left>k) continue;
        
        //di chuyển sang trái rồi quay lại phải
        int dodai=k-left;

        //tìm các cây nấm nằm trong đoạn a[i], a[i]+ dodai
        int right_pos=a[i]+dodai;

        //tìm cây nấm đầu tiên có thể đạt tới :3
        int right_idx=lower_bound(a,right_pos+1);

        //tính tổng sức mạnh mà mario có!
        int current_W=sum[right_idx]-sum[i];
        maxW=max(maxW,current_W);
    }
    
    //tính tổng sức mạnh khi di chuyển từ X sang phải rồi sang trái
    for(int i=0;i<n;i++){
        int right=abs(x-a[i]);
        if(right>k) continue;

        //di chuyển sang phải rồi quay lại trái
        int dodai=k-right;

        //tìm các cây nấm nằm trong đoạn a[i],a[i]+dodai
        int left_pos=a[i]-dodai;
        
        //tìm cây nấm đầu tiên có thể đạt tới :3
        int left_idx=lower_bound(a,left_pos);

        //tính tổng sức mạnh mà mario có, lần nữa XD!
        int current_W=sum[i+1]-sum[left_idx];
        maxW=max(maxW,current_W);
    }

    cout<<maxW<<endl;
}