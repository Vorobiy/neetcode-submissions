class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;

        for(int i = 0; i < nums.size(); i++){
            mp.insert({nums[i], i});
        }

        for(int i = 0; i < nums.size(); i++){
            if(mp.contains(target - nums[i]) && mp.at(target - nums[i]) != i){
                if(i < mp.at(target - nums[i])){
                    return {i, mp.at(target - nums[i])};
                } else {
                    return {mp.at(target - nums[i]), i};
                }
            }
        }
    }
};
