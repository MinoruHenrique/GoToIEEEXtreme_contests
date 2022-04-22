#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;cin>>t;

    while(t--){ 
        int n;cin>>n;
        int facts[3]={0,0,0};
        //Primer factor
        if(n<24){
            cout<<"NO"<<endl;
            continue;
        }
        for(int fact=2;fact*fact<n;fact++){
            if(n%fact==0){
                facts[0]=fact;
                n/=fact;
                break;
            }
        }
        if(facts[0]==0){
            cout<<"NO"<<endl;
            continue;
        }

        //Segundo factor
        if(n<6){
            cout<<"NO"<<endl;
            continue;
        }
        for(int fact=facts[0]+1;fact*fact<n;fact++){
            if(n%fact==0){
                facts[1]=fact;
                n/=fact;
                break;
            }
        }
        if(facts[1]==0){
            cout<<"NO"<<endl;
            continue;
        }

        //Tercer factor
        if(n>facts[1]){
            facts[2]=n;
            cout<<"YES"<<endl;
            for(int i=0;i<3;i++){
                cout<<facts[i]<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

           

    }

    return 0;
}