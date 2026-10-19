class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //input: array of nums
        //output: pair of indices
        //explicit constraints: i != j
        //implicit constraints: output will always be size 2, no point 
        // in making vector, adds memory
        
        //algorithm:
        //iterate through nums, store each nums val as key with it's
        //respective index as the val in the map.
        //check target - nums[i] is in hm and that it's value is not
        //the same as current index.
        //time complexity: O(2n) = O(n) since two-pass
        //space complexity: O(n) since hashmap had to be established

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
            } else {
                continue;
            }
        }
        return {};
    }
};
