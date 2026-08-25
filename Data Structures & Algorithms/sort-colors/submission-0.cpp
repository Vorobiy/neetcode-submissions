class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> newArr = {0, 0, 0};

        //populate bucket array
        for(int i = 0; i < nums.size(); i++){
            newArr[nums[i]] += 1;
        }

        int n = 0;
        for(int i = 0; i < newArr.size(); i++){
            for(int j = 0; j < newArr[i]; j++){
                nums[n] = i;
                n++;
            }
        }
    }
};