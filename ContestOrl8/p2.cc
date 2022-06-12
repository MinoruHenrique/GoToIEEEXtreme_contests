#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
ll n,m,k;

bool p(ll);

int main(){

    cin>>n>>m>>k;
    if(m==n) cout<<1<<endl;
    else{
        ll l=1,r=m;
        while(l<r){
            int mid=l+(r-l+1)/2;
            if(p(mid)) l=mid ;
            else  r=mid-1;
        }
        cout<<l<<endl;



    }
    

    return 0;
}

bool p(ll x){
    ll sum=x,len=k-1;
    //LEFT
    if(len<x) sum+=len*(2*x-len-1)/2;
    else sum+=len-x+1+(x-1)*x/2;
    //RIGHT
    len=n-k;
    if(len<x) sum+=len*(2*x-len-1)/2;
    else sum+=len-x+1+(x-1)*x/2;

    return sum<=m;
}