class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> group;
        for(string s : strs){
            string key = s;
            sort(begin(key), end(key));
            group[key].push_back(s);
        }
        vector<vector<string>> result;
        for( auto& pair : group){
            result.push_back(pair.second);
        }
        return result;
    }
};
