class Solution {
public:

        void find(vector<vector<int>>&ans,vector<int>&nums,int n ,int index){
            if(index==n){
                ans.push_back(nums);
                return ;
            }
            for(int i =index;i<nums.size();i++){
                swap(nums[index],nums[i]);
                find(ans,nums,n,index+1);
                swap(nums[index],nums[i]);
            }
        }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        find(ans,nums,nums.size(),0);
        return ans;
        
    }
};