

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        //group them like you do in your head
        //populate hashset with entire array
        
        std::unordered_set<int> sett;
        int longest = 0;

        for(int i = 0; i < nums.size(); i++){
            sett.insert(nums[i]);
        }

        for (int i = 0; i < nums.size(); i++){
            if(!sett.contains(nums[i] - 1)){
                int length = 0;

                while(sett.contains(nums[i] + length)){
                    length++;
                }

                longest = std::max(length, longest);
            }
        }

        return longest;
    }
};
