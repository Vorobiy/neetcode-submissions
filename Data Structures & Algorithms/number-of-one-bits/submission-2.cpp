class Solution {
public:
    int hammingWeight(uint32_t n) {
        int result = 0;
        while(n != 0){
            int lsb = n & 1;
            n = n >> 1;
            if(lsb == 0){
                continue;
            } else {
                result++;
            }
        }

        return result;
    }
};
