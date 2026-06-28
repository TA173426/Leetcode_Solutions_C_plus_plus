class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> myMap;
        myMap.reserve(10001);
        for(int i=0;i<nums.size();i++){
            myMap[nums[i]]++;
        }
        for (const auto& [key, value] : myMap) {
            if(value==1)return key;
        }   
        return 0;
    }
};