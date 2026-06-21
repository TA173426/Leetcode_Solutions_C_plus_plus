class Solution {
public:

void combination(vector<vector<int>>&ans,vector<int>&temp,vector<int>&nums, int target,int start=0){
    if(target==0){
        ans.push_back(temp);
        return;
    }
    for(int i =start ;i<nums.size();i++){
        if(target<nums[i])break;
        if(i>start && nums[i]==nums[i-1])continue;
        temp.push_back(nums[i]);
        combination(ans,temp,nums,target-nums[i],i+1);
        temp.pop_back();
    }
}

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>ans;
        vector<int>temp;
        combination(ans,temp,candidates,target);
        return ans;
    }
};