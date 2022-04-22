#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;cin>>n;
    vector <int> A;
    while(n--){
        int k;cin>>k;
        A.push_back(k);
    }
    sort(A.begin(),A.end());
    int dias=1;
    for(int i=0;i<A.size();i++){
        if(A[i]>=dias) dias++;
    }
    cout<<dias-1;

    return 0;
}