class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        //to store array of array
        vector<vector<int>> res;
        //sort garna parcha navai duplicate elem vaye same a
        //answer bar bar aaucha
        sort(nums.begin(), nums.end());

        //so yo for loop first number ko lagi ho 
        //aru baki duita hamne two pointer le nikalcham
        for (int i = 0; i < nums.size(); i++) {
            //agar duplicate element vaye ek dusra ko 
            //pachari taba skip gardini telai
            if (i > 0 && nums[i] == nums[i-1]) {
                continue;
            }
            //left pointer i + 1 mane ek age rahancha
            int l = i + 1;
            //simple right pointer starting from end
            int r = nums.size() - 1;

            //two pointer start
            while(l < r) {
                //total nikalni
                int total = nums[i] + nums[l] + nums[r];
                //total 0 vanda vesi vaye right lai kamauni
                if (total > 0) {
                    r--;
                }
                //navai left lai
                else if (total < 0) {
                    l++;
                }
                //agar 0 vaye total sum yaha aaucha
                else {
                    //result ma halni
                    res.push_back({nums[i], nums[l], nums[r]});
                    //aba aauta corner case cha jaba hamle
                    //left lai barauna parcha tai vra yo gareko
                    l++;
                    //aba left lai bara pachi herna parcha to feri
                    //ta repeat(dup) va chaina agar chaina vne 
                    //aru last tak left puge chaina vne left lai
                    //barai rakni
                    while(nums[l] == nums[l-1] && l < r) {
                        l++;
                    }
                }
            }
        }
        return res;
    }
};