class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int rows = matrix.size();
        int col = matrix[0].size();
        vector<int>histo(col,0);
        int maxi=0;
        for(int i =0;i<rows;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]=='0')histo[j]=0;
                else histo[j]+=1;
            }
        stack<int>st;
            for(int j = 0;j<=col;j++){
                int current_height = (j == col) ? 0 : histo[j];
            while(!st.empty()&&histo[st.top()]>current_height){
                int index = st.top();
                st.pop();
                int width = st.empty()?j:(j-st.top()-1);
                maxi= max(maxi,histo[index]*width);
            }
                st.push(j);
            }
        }
    return maxi;
    }
};