#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;cin>>n;
    pair<int,int> puntos[n+5];
    map<pair<int,int>,int> sumas;
    for(int i=0;i<n;i++){
        cin>>puntos[i].first>>puntos[i].second;
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(i!=j){
                pair<int,int> suma;
                suma.first=puntos[i].first+puntos[j].first;
                suma.second=puntos[i].second+puntos[j].second;
                if(sumas.count(suma)){
                    sumas[suma]++;
                }
                else{
                    sumas.insert(make_pair(suma,1));
                }
            }
        }
    }
    int resultado=0;
    for(auto iter=sumas.begin();iter!=sumas.end();++iter){
        int k=(*iter).second;
        resultado+=k*(k-1)/2;
    }
    cout<<resultado;

    return 0;
}