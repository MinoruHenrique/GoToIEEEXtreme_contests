#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,U,Q;
    cin>>N>>U>>Q;
    pair<int,int> Updates[U+5];
    
    for(int i=0;i<U;i++){
        cin>>Updates[i].first>>Updates[i].second;
    }

    while(Q--){
        long long U,V;cin>>U>>V;
        long long sum=0;
        for(int i=0;i<N;i++){//Exploración entre todos los updates realizados
            int u=Updates[i].first;
            int v=Updates[i].second;
            if(!(v<U || u>V)){
                if(u<U){
                    sum+=((v-u+1)%10000)*((v-u+2)%10000);
                    sum-=((U-u)%10000)*((U-u+1)%10000);
                }
                else if(v>V){
                    sum+=((V-u+1)%10000)*((V-u+2)%10000);
                }
                else{
                    sum+=((v-u+1)%10000)*((v-u+2)%10000);
                }
                sum%=10000;
            }
        }
        cout<<sum%10000/2<<endl;
    }
    return 0;
}