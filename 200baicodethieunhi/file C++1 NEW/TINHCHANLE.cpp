#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	freopen("TINHCHANLE.inp","r",stdin);
	freopen("TINHCHANLE.out","w",stdout);
	int n;
	cin>>n;
	while(n--){
		int T,dem=0;
		cin>>T;
		while(T>0){
			if(T%2==1){
				dem++;
			}
			T/=2;
		}
		if(dem%2==0)cout<<"even"<<"\n";
		else cout<<"odd"<<"\n";
	}
}