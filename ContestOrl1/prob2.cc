#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> casos;
    while(true){
        int n;cin>>n;
        if(n==0) break;
        casos.push_back(n);
    }
    for(int i=0;i<casos.size();i++)
    {
        int n=casos[i];
        queue <int> Cards;
        for(int i=1;i<=n;i++){
            Cards.push(i);
        }
        cout<<"Discarded cards: ";
        for(int i=0;i<n-1;i++){
            cout<<Cards.front();
            if(i!=n-2) cout<<", ";
            Cards.pop();
            Cards.push(Cards.front());
            Cards.pop();
        }
        cout<<endl;
        cout<<"Remaining card: "<<Cards.front()<<endl;
    }    
}