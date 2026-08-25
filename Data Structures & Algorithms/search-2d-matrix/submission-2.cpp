class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i = 0; i < matrix.size(); i++){
            int j = matrix[i][0];
            int k = matrix[i][matrix[i].size()-1];

            if(target >= j && target <= k){
                int left = 0;
                int right = matrix[i].size();

                while(left <= right){
                    if(matrix[i][left] == target){
                        return true;
                    } else if (matrix[i][right] == target){
                        return true;
                    } else {
                        left++;
                        right--;
                    }
                }
            } else {
                continue;
            }
        }

        return false;
    }
};
