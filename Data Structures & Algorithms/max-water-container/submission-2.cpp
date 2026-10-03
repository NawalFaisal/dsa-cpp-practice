class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size() - 1;
        int maxArea = 0;

        while(left < right){
            int height = min(heights[right], heights[left]);
            int length = right - left;
            int area = height * length;

            maxArea = max(maxArea, area);
            if(heights[left] < heights[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return maxArea;
        
    }
};
