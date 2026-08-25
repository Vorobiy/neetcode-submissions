class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i = 0;
        int j = nums.size()-1;

        while(i <= j){
            if(nums[i] == target){
                return i;
            } else if (nums[j] == target) {
                return j;
            } else {
                i++;
                j--;
            }
        }

        return -1;
    }
};
