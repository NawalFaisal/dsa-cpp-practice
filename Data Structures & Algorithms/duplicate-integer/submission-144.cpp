class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        /* Input: Integer array nums
        */
        /* Ds/Algo: unordered set
        */
        /* What to do with the data: check if their are duplicates
        */
        /* Output: return true or false if duplication is detected
        */

        //inilizse unorded_set
        unordered_set<int> set;
        //iter through input array
        for(int i = 0; i < nums.size(); i++){
            if(set.count(nums[i])){
                return true;
            }
            set.insert(nums[i]);
        }
        return false;

    }
};