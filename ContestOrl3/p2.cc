#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;cin>>t;

    while(t--){
        string cadena;
        cin>>cadena;
        for(char a='a';a<='z';a++){
            int i=0,j=0;
            bool cumple=false;
            while(i<cadena.length()){
                if(cadena[i]!=a){
                    i++;
                    j=i;
                }else if(cadena[j]==a){
                    j++;
                }else if(cadena[j]!=a){
                    if((j-i+1)%2==0) cumple=true;
                    i=j;
                }
            }
            if(cumple) cout<<a;   
        }
        cout<<endl;
        

    }

    return 0;
}