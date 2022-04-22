#include <bits/stdc++.h>

using namespace std;

int main(){
    int k;cin>>k;int f=k;
    vector<int> nums;
    while(f--){
        int n;cin>>n;
        nums.push_back(n);
    }
    int dif=0;
    for(int i=1;i<k;i++){
        dif=abs(nums[i]-nums[i-1]);
        if(dif==0 || dif>=k){
            cout<<"Not Jolly"<<endl;
            return 0;
        } 
    }

    cout<<"Jolly"<<endl;

    return 0;
}
