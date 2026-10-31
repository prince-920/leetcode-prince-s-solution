class Solution {
public:
    int LEFT = 0;
    int UP = 1;
    int MOD = 1e9 + 7;
    int m, n;

    int uniquePaths(vector<vector<int>>& grid) {
        m = grid.size();
        n = grid[0].size();

        // t[row][col][LEFT] = ways to reach this cell by entering from the left
        // t[row][col][UP]   = ways to reach this cell by entering from above
        vector<vector<array<int, 2>>> t(
            m, vector<array<int, 2>>(n, {0, 0})
        );

        // Start cell: one way to be here
        t[0][0][LEFT] = 1;

        // Prefill 0th row
        for (int col = 1; col < n; col++) {
            t[0][col][LEFT] = 1;

            if (grid[0][col] == 1)
                break;
        }

        // Prefill 0th column
        for (int row = 1; row < m; row++) {
            t[row][0][UP] = 1;

            if (grid[row][0] == 1)
                break;
        }

        // Fill the remaining cells
        for (int row = 1; row < m; row++) {
            for (int col = 1; col < n; col++) {

                // Entering from the left neighbour
                if (grid[row][col - 1] == 1) {
                    t[row][col][LEFT] = t[row][col - 1][UP];
                } else {
                    t[row][col][LEFT] =
                        (t[row][col - 1][LEFT] +
                         t[row][col - 1][UP]) % MOD;
                }

                // Entering from the top neighbour
                if (grid[row - 1][col] == 1) {
                    t[row][col][UP] = t[row - 1][col][LEFT];
                } else {
                    t[row][col][UP] =
                        (t[row - 1][col][LEFT] +
                         t[row - 1][col][UP]) % MOD;
                }
            }
        }

        // Destination: count arrivals from either direction
        return (t[m - 1][n - 1][LEFT] +
                t[m - 1][n - 1][UP]) % MOD;
    }
};