#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;cin>>t;

    while(t--){
        int n;cin>>n;
        int A[n],B[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        for(int i=0;i<n;i++){
            cin>>B[i];
        }
        int maxs[n],mins[n];
        for(int i=0;i<n;i++){
            maxs[i]=max(A[i],B[i]);
            mins[i]=min(A[i],B[i]);
        }
        /*
        for(int i=0;i<n;i++){
            cout<<maxs[i]<<" ";
        }
        cout<<endl;
        for(int i=0;i<n;i++){
            cout<<mins[i]<<" ";
        }
        cout<<endl;
        */
        int maxA=-1,maxB=-1;
        for(int i=0;i<n;i++){
            maxA=max(maxA,maxs[i]);
            maxB=max(maxB,mins[i]);
        }
        cout<<maxA*maxB<<endl;
    }





    return 0;
}