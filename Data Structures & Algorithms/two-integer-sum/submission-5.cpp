class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // put the numbers into hashmap with num and index

        std::unordered_map<int, int> hm;

        for(int i = 0; i < nums.size(); i++){
            //populate hashmap 
            hm[nums[i]] = i;
        }

        //if the target - nums is in hm, then return hm value and nums 
        // value

        for(int i = 0; i < nums.size(); i++){
            if(hm[target - nums[i]] && hm[target - nums[i]] != i){
                return {i, hm[target - nums[i]]};
            }
        }
    }
};
