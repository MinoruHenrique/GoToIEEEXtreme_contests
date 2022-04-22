#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,M;
    cin>>N>>M;
    multiset<int> Jack;

    for(int i=0;i<N;i++){
        int k;cin>>k;
        Jack.insert(k);
    }
    int count=0;
    for(int i=0;i<M;i++){
        int k;cin>>k;
        auto it=Jack.find(k);
        if(it!=Jack.end()){
            count++;
            Jack.erase(it);
        }

    }
    cin>>N>>M;
    cout<<count;
    
}