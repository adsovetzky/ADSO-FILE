#include<bits/stdc++.h>
using namespace std;
int M;
int ATTACKTHEDPOINT(int i,int k, int a[1000]){
    int L=0;
    int kq=-1;
    int R=i-1;
    while(L <= R){
            int M=(L+R)/2;
                if(a[i]-a[M]>=k){
                    L=M+1;
                    kq=M;
                }
                else{
                    R=M-1;
                }
        }
    return kq;
}
int main()
{
    int n,k,kq=-1,a[1000],b[1000],ans[1000];
    memset(ans,0,sizeof(ans));
    int MAXNEST=0,MAXNOW=0;

    cin>>n>>k;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    for(int i=0;i<n;i++){
         int j=ATTACKTHEDPOINT(i,k,a);
        if(j!=1)
        {
            ans[i]=max(ans[i],b[i]+ans[j]);

        }
        else ans[i]=max(ans[i],b[i]);
       cout<<ans[i]<<" ";
    }
    cout<<endl<<*max_element(ans,ans+n);
}

///9
///3
///1 3 5 7 8 9 13 16 18
///3 6 8 2 4 6 9 7 3
////    for(int i=0;i<n;i++){
////        for(int j=0;j<n;j++){
////            if(a[j]-a[i]>=k){
////                if(b[i]+b[j]>ans[i])
////                    ans[i]=b[i]+b[j];
////            }
////            else{ans[i]=b[i];}
////            }
////cout<<ans[i]<<" ";
////        }
////cout<<endl<<*max_element(ans.begin(),ans.end());
////}

//    for(int i=0;i<n;i++){
//        if(i+k>=n) break;
//        else{
//            MAXNOW=b[i]+b[i+k];
//            if(MAXNOW>MAXNEST){
//                MAXNEST=MAXNOW;
//            }
//        }
//    }
//    cout<<MAXNEST;
