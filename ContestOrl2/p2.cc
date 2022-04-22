#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    long long sums[n+10];
    sums[0]=0;
    for(int i=1;i<=n;i++){
        long long temp;cin>>temp;
        sums[i]=sums[i-1]+temp;
    }

    double sumMax=-1;
    for(int l=k;l<=n;l++){
        for(int i=1;i<=n-l+1;i++){
            long long sum=sums[i+l-1]-sums[i-1];
            double sumf=(sum*1.0)/l;
            if(sumf>sumMax){
                sumMax=sumf;
            } 
        }
    }
    cout.precision(17);
    cout<<sumMax;

    return 0;
}