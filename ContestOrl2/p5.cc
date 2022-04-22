#include <bits/stdc++.h>

using namespace std;

int main(){
    string palabra;
    cin>>palabra;
    pair <char,int> secuencia[palabra.length()+5];
    
    secuencia[0].first=palabra[0];
    secuencia[0].second=1;
    char charAct=secuencia[0].first;
    int j=0;

    for(int i=1;i<palabra.length();i++){
        if(palabra[i]==charAct) secuencia[j].second++;
        else{
            j++;
            secuencia[j].first=palabra[i];
            secuencia[j].second=1;
            charAct=palabra[i];
        }
    }
    secuencia[j+1].first='e';
/*
    for(int i=0;i<palabra.length();i++){
        if(secuencia[i].first=='e') break;
        cout<<secuencia[i].first<<" "<<secuencia[i].second<<endl;
    }
*/




    return 0;
}