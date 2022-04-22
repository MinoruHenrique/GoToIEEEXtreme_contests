#include <bits/stdc++.h>

using namespace std;

int main(){
    int x;cin>>x;
    int ans=0;
    for(int mask=1<<29;mask>0;mask>>=1){
        ans+=x/mask;
        x=x%mask;
    }
    cout<<ans;


    return 0;
}