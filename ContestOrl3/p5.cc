#include <bits/stdc++.h>

using namespace std;

int main(){ 
    int n;int num;cin>>n;
    map<int,int> Entrada;
    for(int i=1;i<=n;i++){
        cin>>num;
        Entrada.insert(make_pair(num,i));
    }
    int salida[n+5];
    for(int i=0;i<n;i++){
        cin>>num;
        salida[i]=Entrada[num];
    }
    int pos=n-2;
    int actSec=salida[n-1];
    int fined=0;
    while(pos>=0 and actSec!=1){
        if(salida[pos]>actSec){
            fined++;
        }else actSec=salida[pos];
        pos--;
    }
    cout<<fined+pos+1;
    return 0;
}