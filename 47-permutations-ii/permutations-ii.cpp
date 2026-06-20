class Solution {
public:

    void find(vector<vector<int>>&ans,vector<int>&nums,vector<vector<int>>&dp,int n ,int index){
    if(index ==n){
        ans.push_back(nums);
        return;
    }
    for(int i =index;i<nums.size();i++){
        swap(nums[index],nums[i]);
        if(dp[index][nums[index]+10]==-1){
            dp[index][nums[index]+10]=1;
            find(ans,nums,dp,n,index+1);
        }
        swap(nums[index],nums[i]);
    }
    
     for (int i = index; i < nums.size(); i++) {
        dp[index][nums[i] + 10] = -1;
    }
    
}
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<vector<int>>dp(nums.size(),vector<int>(21,-1));
        find(ans,nums,dp,nums.size(),0);
        return ans;
    }
};