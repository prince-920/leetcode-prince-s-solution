class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> ans(m, string(n, '#'));

        // Make the first row empty
        for (int j = 0; j < n; j++) {
            ans[0][j] = '.';
        }

        // Make the last column empty
        for (int i = 0; i < m; i++) {
            ans[i][n - 1] = '.';
        }

        return ans;
    }
};
        
        
