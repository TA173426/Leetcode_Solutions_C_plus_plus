class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> myMap;
        myMap.reserve(10001);
        for(int i=0;i<nums.size();i++){
            if(myMap[nums[i]]==2)myMap.erase(nums[i]);
            else myMap[nums[i]]++;
        }
        return myMap.begin()->first;
    }
};