class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = INT_MIN;
        int mx = 0;
        for(auto &x : nums){
            mx += x;
            if(mx > ans){
                ans = mx;
            }
            if(mx < 0){
                mx = 0;
            }
        }
        return ans;
    }
};