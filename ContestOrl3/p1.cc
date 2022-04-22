#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> weights(n+5);
        for(int i=0; i<n;i++){
            cin>>weights[i];
        }
        sort(weights.begin(),weights.begin()+n);
        int cantmax=-1;
        for(int s=2;s<=100;s++){
            int i=0,j=n-1;
            int cant=0;
            while(i<j){
                if(weights[i]+weights[j]==s){
                    cant++;
                    i++;j--;
                }
                else if(weights[i]+weights[j]<s) i++;
                else j--;
            }
            if(cant>cantmax) cantmax=cant;
        }
        cout<<cantmax<<endl;
    }


    return 0;
}