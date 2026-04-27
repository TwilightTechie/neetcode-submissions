class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
//paila size nikali ki kinaki kaam aaucha array create garna ma
    int n = nums.size();
    vector<int> res(n,1);
    vector<int> pref(n,1);
    vector<int> suff(n,1);

    for (int i = 1; i < n; i++) {
        pref[i] = pref[i-1] * nums[i-1];
    }
    for (int i = n-2; i >= 0; i--) {
        suff[i] = nums[i+1] * suff[i+1];
    }
    for (int i = 0; i < n; i++) {
        res[i] = pref[i] * suff[i];
    }
    return res;
    }
};
