#include<bits/stdc++.h>
using namespace std;

const int MAXN = 1e7;
vector<bool> adso(MAXN,false);

void tamgiac(){
	int sum=0;
	for(int i=1;i<=MAXN;i++){
		sum+=i;
		adso[sum]=true;
	}
}
int main(){
	ios_base::sync_with_stdio(0);
	freopen("SOTAMGIAC.inp","r",stdin);
	freopen("SOTAMGIAC.out","w",stdout);
	
	tamgiac();

	int n,t;                                                                                                                                                                                                                                                                                                                                                  
	cin>>n;
	while(n--){
		cin>>t;
		if(adso[t]) cout<<"1"<<"\n";
		else cout<<"0"<<"\n";
	}
}