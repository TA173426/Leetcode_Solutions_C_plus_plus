class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>st;
        for(int a:nums){
            if(st.count(a))return true;
            st.insert(a);
        }
        return false;
    }
};