class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0;
        int r = heights.size()-1;
        int res = 0;
        while(l < r) {
            //heights[l] = height of the left line
            //heights[r] = height of the right line
            //min(heights[l], heights[r]) = the effective height of water between the two lines (limited by the shorter line)
            //(r - l) = the width (distance) between the two lines
            int area = min(heights[l], heights[r]) * (r - l);
            res = max(res, area);
            if (heights[l] <= heights[r]) {
                l++;
            }
            else {
                r--;
            }
        }
        return res;
    }
};
