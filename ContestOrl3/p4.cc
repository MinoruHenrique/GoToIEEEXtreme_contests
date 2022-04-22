#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;cin>>n;
    char S[n+5];

    for(int i=0;i<n;i++){
        cin>>S[i];
    }
    char Els[3]={'B','G','R'};
    char ElsOPTM[3];
    int cantMin=10000000;
    do{
        int cantCambios=0;
        for(int i=0;i<n;i++){
            if(S[i]!=Els[i%3])cantCambios++;
        }
        if(cantCambios<cantMin){
            cantMin=cantCambios;
            copy(begin(Els),end(Els),begin(ElsOPTM));
        } 
    }while(next_permutation(Els,Els+3));
    cout<<cantMin<<endl;
    for(int i=0;i<n;i++){
        cout<<ElsOPTM[i%3];
    }
    return 0;
}