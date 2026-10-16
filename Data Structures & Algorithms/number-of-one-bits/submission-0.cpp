class Solution {
public:
    int hammingWeight(uint32_t n) {
        //1. We go through n
        //2. check if the last element is 1, if it is count++, if its not continue

        int res = 0;
        while(n != 0){
            if(n & 1){
                res++;
            } else {
                res += 0;
            }
            n = n >> 1;
        }

        return res;
    }
};
