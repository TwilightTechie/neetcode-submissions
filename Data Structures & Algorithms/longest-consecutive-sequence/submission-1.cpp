class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        //yo hamle gardai cham taki duplicate remove hos
        //r o(1) ma access garna sakam
        unordered_set<int> numSet(nums.begin(), nums.end());
        
        int longest = 0;


        for(int num : nums) {
            //so set ma already data cha ta hamle check
            //gardai cham ki num ko agarki ko kunai number cha
            //r set ma already, cha vane to first number haina
            //so hamne to skip garcham..lekin agar chaina vne
            //hami if ko vitra jancham r hercham ki tesko age aru kati oora
            //element cha
            if (numSet.find(num - 1) == numSet.end()){
                        int length = 0;
                //esma hamni age gara hercham, aru length 0 cha s
                //so hamese afu bata start garcha...ani age bardai jancha
                while(numSet.find(num + length) != numSet.end()) {
                    length++;
                }
                longest = max(length, longest);
            }
        }
        return longest;
        
    }
};
