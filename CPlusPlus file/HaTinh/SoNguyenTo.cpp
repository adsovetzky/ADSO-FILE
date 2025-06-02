
#include <bits/stdc++.h>
using namespace std;

vector<bool> SangNguyenTo(int(1e7)+2,true);
vector<int> SoNguyento;

void Sang()
{
    SangNguyenTo[0]=SangNguyenTo[1]=false;
    {
      for(int i = 0; i * i < int(1e7) + 2; i++)
        if(SangNguyenTo[i]==true){
            SoNguyento.emplace_back(i);
            for (int j = i*i; j < int(1e7)+2; j+=i)
            {
              SangNguyenTo[j]=false;
            }            
        }
    }
    
}
set<int> tr,fls;
bool kt_nt(int n){
    if(tr.find(n)!=tr.end()) return true;
    if(fls.find(n)!=fls.end()) return false; 
    if(n<2) return false;
    for (int i = 2; i*i < n; i++)
    {
        if(n%i==0) {
            fls.insert(n);
            return false;
        }
    }
    tr.insert(n);
    return true;
}


int main()
{
    Sang();
    int q;
    cin>>q;
    for (int i = 0; i < q; i++)
    {
        int n;
        cin>>n;
        if(n>int(1e6)){
            int i=n;
            while (!kt_nt(i))
            {
                i++;
            }
            cout<<i;
        }
        else cout<<*lower_bound(SoNguyento.begin(),SoNguyento.end(),n)<<'\n';
    }
    
}
