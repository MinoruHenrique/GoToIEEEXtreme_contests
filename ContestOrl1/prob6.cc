#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        string num;
        cin>>num;
        int pos=0;
        for(int i=num.length()-1;i>0;i--){
            if((num[i]-'0')+(num[i-1]-'0')>9){
                pos=i-1;
                break;
            }
        }

        cout<<num.substr(0,pos)<<(num[pos]-'0')+(num[pos+1]-'0')<<num.substr(pos+2)<<endl;
    }
    

    return 0;
}
