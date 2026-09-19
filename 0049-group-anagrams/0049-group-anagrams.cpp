class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       
        unordered_map< string, vector<string>> mp;
        // keya ans values stores

        for (int i = 0; i < strs.size(); i++) {
            string key = strs[i];
            string values = strs[i];
            sort(key.begin(), key.end());
            mp[key].push_back(values);

        }
        vector<vector<string>>res;
        for(auto & it: mp){
            res.push_back(it.second);
        }
        return res;


    }
};