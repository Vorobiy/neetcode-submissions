class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i = 0; i < matrix.size(); i++){
        
            int j = 0;
            int k = matrix[i].size() -1;

            while(j <= k){
                if(matrix[i][j] == target){
                    return true;
                } else if(matrix[i][k] == target){
                    return true;
                } else {
                    j++;
                    k--;
                }
            }

        }

        return false;
    }
};
