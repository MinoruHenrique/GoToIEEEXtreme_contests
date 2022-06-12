#include <bits/stdc++.h>

using namespace std;

int a,b,n;

int main(){
    cin>>a>>b>>n;
    int gcdG=__gcd(a,b),cant_div;
    for(int i=1;i*i<=gcdG;i++){
        if(gcdG%i==0){
            cant_div++;
            if(i*i!=gcdG){
                cant_div++;
            }
        } 
    }    
    int divs[cant_div+5],j=0;
    for(int i=1;i*i<=gcdG;i++){
        if(gcdG%i==0){
            divs[j]=i;
            if(i*i!=gcdG){
                divs[cant_div-1-j]=gcdG/i;
            }
            j++;
        } 
        
    }  
    for(int i=0;i<cant_div;i++){
        cout<<divs[i]<<" ";
    }
    cout<<endl;
    while(n--){
        int l,r,xsol;cin>>l>>r;
        xsol=upper_bound(divs,divs+cant_div,r)-divs-1;
        if(divs[xsol]<l) cout<<-1;
        else cout<<divs[xsol];
        cout<<endl;
    }
    return 0;
}