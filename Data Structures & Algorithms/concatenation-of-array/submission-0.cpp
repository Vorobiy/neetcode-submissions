class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        //getting length of nums, which is also divided by the size of the element.
        int length = nums.size();

        int *ans = new int[length * 2];

        for(int i = 0; i < length; i++){
            ans[i] = nums[i];
        }

        for(int i = length; i < (length * 2); i++){
            ans[i] = nums[i - length];
        }

        vector<int> result(ans, ans + (length * 2));
        delete[] ans;
        return result;
    }
};