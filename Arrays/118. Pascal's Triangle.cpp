class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<int> prev(1, 1);
        vector<vector<int>>ans;
        ans.push_back(prev);
        for (int i = 2; i <= numRows; i++) {
            vector<int>cur(1, 1);
            int ind = 0;
            while (ind + 1 < prev.size()) {
                cur.push_back(prev[ind] + prev[ind + 1]);
                ind++;
            }
            cur.push_back(1);
            ans.push_back(cur);
            prev = cur;
        }
        return ans;
    }
};