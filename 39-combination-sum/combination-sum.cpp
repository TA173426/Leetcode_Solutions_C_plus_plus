class Solution {
public:

    void find(vector<vector<int>>&ans,vector<vector<int>>&dp,vector<int>&temp,vector<int>&nums,int n , int index,int target){
        if(target==0){
            ans.push_back(temp);
            return; 
        }
        if(index==n || target<0)return;
        if(dp[index][target]!=-1)return;
        if(target>=nums[index]){
            temp.push_back(nums[index]);
            dp[index][target]=1;
            find(ans,dp,temp,nums,n,index,target-nums[index]);
            temp.pop_back();
            dp[index][target]=-1;
        }
        find(ans,dp,temp,nums,n,index+1,target);
    }

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        vector<vector<int>>dp(nums.size(),vector<int>(target+1,-1));
        vector<int>temp;
        find(ans,dp,temp,nums,nums.size(),0,target);
        return ans;
    }
};