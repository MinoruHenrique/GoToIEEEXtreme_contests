#include <bits/stdc++.h>

using namespace std;


int main(){
    int n,m,q,k,cumsum=0;cin>>n;
    int a[n+5];
    for(int i=0;i<n;i++){
        cin>>k;
        if(i==0) a[i]=k;
        else a[i]=a[i-1]+k;
    }

    cin>>m;
    while(m--){
        cin>>q;
        cout<<lower_bound(a,a+n,q)-a+1<<endl;
    }
    return 0;
}