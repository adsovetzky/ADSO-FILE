#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    long long a0,a1,a2,a3,a4; cin>>a0>>a1>>a2>>a3>>a4;
    long long time=0;
    //1 1 0 2 1
    if(a3>0){
        if(a1>0){
            if(a1<=a3){
                a4+=a1;
                a3-=a1;
                time+=2*a1;
                a1=0;
            }
            else{
                a4+=a3;
                a1-=a3;
                time+=2*a3;
                a3=0;
            }
        }        
        if(a2%2==0){
            time+=2*a2;
            a4+=a2/2;
            a2=0;
        }
        else{ 
            time+=2*(a2-1);
            a4+=a2/2;
            a2=a2%2;
        }
    }
    if(a1>0&&a2==0&&a3==0||a2>0&&a3==0&&a1==0||a3>0&&a1==0&&a2==0){
        time+=a1+2*a2+3*a3;
        a0+=a1+a2+a3;
        a1=0; a2=0; a3=0;
    }
    cout<<a0<<" "<<a1<<" "<<a2<<" "<<a3<<" "<<a4<<endl;
    cout<<time;
}