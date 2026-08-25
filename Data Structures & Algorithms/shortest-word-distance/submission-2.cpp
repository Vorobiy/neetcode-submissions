class Solution {
public:
    int shortestDistance(vector<string>& wordsDict, string word1, string word2) {
        //sliding window, O(n)

        //until the array is done:
            //set 

        int left = -1;
        int right = -1;
        int minDistance = wordsDict.size();

        for(int i = 0; i < wordsDict.size(); i++){
            if(wordsDict[i] == word1){
                left = i;
            } else if (wordsDict[i] == word2){
                right = i;
            }

            if(left != -1 && right != -1){
            minDistance = min(minDistance, abs(left - right)); 
            }
        }

        return minDistance;
    }
};
