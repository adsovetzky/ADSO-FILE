#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    freopen("1098.inp","r",stdin);
    freopen("1098.out","w",stdout);
    
    long long n; cin >> n;
    vector<long long> danh_sach_so;

    while(n--){
        string s; cin >> s;
        for(long long i = 0; i < s.size(); i++){
            if(!isdigit(s[i])) continue;
            for(long long j = i; j <= s.size(); j++){
                if(j == s.size() || !isdigit(s[j])){
                    string u = s.substr(i, j - i);
                    long long val = atoll(u.c_str());
                    danh_sach_so.push_back(val);
                    i = j; 
                    break;
                }
            }
        }
    }
    sort(danh_sach_so.begin(), danh_sach_so.end());
    for (auto& var : danh_sach_so){
        cout << var << "\n";
    }
}

