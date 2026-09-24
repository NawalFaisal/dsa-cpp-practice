class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int longest = 0;
        unordered_set<int> set(nums.begin(),nums.end());
        for(int n : nums){
            if(!set.count(n - 1)){
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
