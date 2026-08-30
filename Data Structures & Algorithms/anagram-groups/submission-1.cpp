class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //anagram: exact same cahracters as another string

        using namespace std;

        vector<vector<string>> master;
        unordered_map<string, int> kv;
        map<char, int> temp;

        //step 1: for every iteration, we first create the kv pair 
        // for the word. then, we check if that kv pair exists already 
        //(value being the index in the double vector labeled master).
        // then, if it does, we add it to the nested vector at the
        // index of the key.
        //once that has been inserted, we reset the kv pair for next
        //iteration 

        //Time complexity O(n)
        //space Complexity O(n)

        for(int i = 0; i < strs.size(); i++){
            temp.clear();
            //populating the temp map with the kv pair
            for(int j = 0; j < strs[i].size(); j++){
                temp[strs[i][j]]++;
            }

            // Turn temp into a string so we can use it as a key
            string key = "";


            // formatting key
            for(auto pair : temp){
                key += pair.first;
                key += to_string(pair.second);
            }

            // checking if this key already exists
            if(kv.find(key) != kv.end()){ 
                int index = kv[key];
                master[index].push_back(strs[i]);
            } else { 
                kv[key] = master.size();
                master.push_back({strs[i]});
            }
        }
        
        return master;
    }
};
