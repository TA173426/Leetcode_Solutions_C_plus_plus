class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>ans_map;
        stack<int>st;
        for(int i =0;i<nums2.size();i++){
            if(st.empty()){
                st.push(i);
            }
            if(nums2[st.top()]<nums2[i]){
                ans_map[nums2[st.top()]]=nums2[i];
                st.pop();
                i--;
            }
            else{
                st.push(i);
            }
        }
        for(int i =0;i<nums1.size();i++){
            if(ans_map.count(nums1[i])){
                nums1[i]=ans_map[nums1[i]];
                continue;
            }
            nums1[i]=-1;
            
        }
        return nums1;
    }
};