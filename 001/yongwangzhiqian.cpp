#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>nums;
    int a;
    while(cin>>a){
        nums.push_back(a);
    }
    if(nums.size()==0)cout<<0<<endl;
    if(nums.size()==1)cout<<nums[0]<<endl;
    vector<int>dp(nums.size());
    dp[0]=nums[0];
    dp[1]=max(nums[0],nums[1]);
    for(unsigned int i = 2;i<nums.size();i++){
        dp[i]=max(dp[i-2]+nums[i],dp[i-1]);
    }
    cout<<dp[nums.size()-1]<<endl;
    return 0;
}