#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	freopen("LICHKHANBENH.inp","r",stdin);
	freopen("LICHKHANBENH.out","w",stdout);
	int Q;
	cin>>Q;
	while(Q--){
		int n,x;
		cin>>n>>x;
		cout<<(n-1)*(10-x)<<"\n";
	}
}