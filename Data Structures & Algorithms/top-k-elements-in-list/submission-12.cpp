class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for(int n : nums){
            freq[n]++;
        }
        vector<pair<int,int>> freqVec;
        for(auto& pair : freq){
            freqVec.push_back(pair);
        }

        sort(begin(freqVec), end(freqVec), 
        [] (const auto& a, const auto& b){
            return a.second > b.second;
        });

        vector<int> result;
        for(int i = 0; i < k; i++){
            result.push_back(freqVec[i].first);
        }
        return result;
        
    }
};
