class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> set(begin(nums),end(nums));
        int longest = 0;
        for(int n : nums){
            if(!set.count(n-1)){
                int current = n;
                int length = 1;
            
                while(set.count(current + 1)){
                    current++;
                    length++;
                }
            longest = max(longest,length);
            }
        }
        return longest;
        
    }
};
