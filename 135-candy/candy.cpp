class Solution {
public:
    int candy(vector<int>& ratings) {
        if(ratings.size()==1)return 1;
        vector<int>left(ratings.size(),0);
        vector<int>right(ratings.size(),0);
        int start = 1,end = ratings.size()-1;
        for(int i =0;i<ratings.size()-1;i++){
            if(ratings[start-1]<ratings[start]){
                left[start]=left[start-1]+1;
            }
            if(ratings[end-1]>ratings[end]){
                right[end-1]=right[end]+1;
            }
            start++;
            end--;
        }
        long long sum=0;
        for(int i =0;i<ratings.size();i++){
            sum+=max(left[i],right[i]);
        }
        return sum + ratings.size();
    }
};