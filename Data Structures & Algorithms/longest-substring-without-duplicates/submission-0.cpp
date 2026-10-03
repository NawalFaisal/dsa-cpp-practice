class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int max_length = 0;
        unordered_set<char> seen; 
        for(int right = 0; right < s.size(); right++){
            while (seen.count(s[right])){
                seen.erase(s[left]);
                left++;
            }

            seen.insert(s[right]);
            int current_max = right - left + 1;
            max_length = max(max_length , current_max);
        }
        return max_length;
    }
};
