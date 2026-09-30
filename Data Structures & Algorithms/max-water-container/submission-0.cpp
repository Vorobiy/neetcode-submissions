class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i = 0;
        int j = heights.size() - 1;
        int maxArea = 0;

        while(i <= j){
            int currArea = std::min(heights[i], heights[j]) * (j - i);

            if(currArea > maxArea){
                maxArea = currArea;
            }

            if(heights[i] < heights[j]){
                i++;
                continue;
            }

            if(heights[i] > heights[j]){
                j--;
                continue;
            } else {
                i++;
                j--;
            }
        }
        return maxArea;
    }
};
