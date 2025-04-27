#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    
    int n;
    cin >> n;
    while(n--){
        string str;
        cin >> str;
        if ( str[0] == 'A' and str.size() == 1){
            cout << "YES" << endl;
        }
        else if( str[0] == 'B' and str.size() == 1 or str[0] == 'B' and str[1] == 'B'){
            cout << "NO" << endl;
        }
        else{
            map<char,int> mp;
            for(int i = 0; i < str.size(); i++){
                mp[str[i]]++;
            }
            for(int i = 1; i < str.size()-1; i++){
                if(str[i-1] == 'B' and str[i+1] == 'B' and str[i] == 'B'){
                    cout << "NO" << endl;
                    break;
                }
            }
            if(mp['B']>mp['A']){
                cout << "NO" << endl;
                break;
            }
            else{
                cout << "YES" << endl;
                break;
            }
        }
    }
}