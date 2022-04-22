    #include <bits/stdc++.h>

    using namespace std;

    int main (){
        int n=0;cin>>n;


        while(n--){
            long long l,r;cin>>l>>r;
            long long x=l,aux=x,ans=0;
            for(int i=0;i<63 and x<=r;i++){
                ans=x;
                if((aux&1)==0){x+=(1l<<i);} 
                aux>>=1;
            }  
            cout<<ans<<endl;
        }

        return 0;
    }