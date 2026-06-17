class Solution {
public:

    void powerset(vector<vector<int>>& ans,vector<int>& temp,int index,int n,vector<int>&nums){
        if(index==n){
            ans.push_back(temp);
            return ;
            }
       
            powerset(ans,temp,index+1,n,nums);
            temp.push_back(nums[index]);
            powerset(ans,temp,index+1,n,nums);

            temp.pop_back();
        
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        powerset(ans,temp,0,nums.size(),nums);
        return ans;
    }
};