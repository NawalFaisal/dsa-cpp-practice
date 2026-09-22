class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> pre;

        int prefix = 1;
        for(int i = 0; i < nums.size(); i++){
            pre.push_back(prefix);
            prefix *= nums[i];
        }
        vector<int> post(nums.size());
        int postfix = 1;
        //start at the end of the array
        for(int i = nums.size() - 1; i >= 0; i--){
            post[i] = postfix;
            postfix *= nums[i];
        }
        vector<int> result;
        for( int i = 0; i < nums.size(); i++){
            int res = pre[i] * post[i];
            result.push_back(res);
        }
        return result;



    }
};
