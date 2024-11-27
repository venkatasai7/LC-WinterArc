// https://leetcode.com/problems/number-of-islands/?envType=company&envId=microsoft&favoriteSlug=microsoft-six-months&difficulty=MEDIUM

class Solution {
public:
    void dfs(vector<vector<char>>& grid, int i, int j) {
        if (i > -1 && i < grid.size() && j > -1 && j < grid[0].size() &&
            grid[i][j] == '1') {
            cout << i << " " << j << endl;
            grid[i][j] = '0';
            dfs(grid, i, j);
        } if (i + 1 > -1 && i + 1 < grid.size() && j > -1 &&
                   j < grid[0].size() && grid[i + 1][j] == '1') {
            cout << i + 1 << " " << j << endl;
            grid[i + 1][j] = '0';
            dfs(grid, i + 1, j);
        }  if (i - 1 > -1 && i - 1 < grid.size() && j > -1 &&
                   j < grid[0].size() && grid[i - 1][j] == '1') {
            cout << i - 1 << " " << j << endl;
            grid[i - 1][j] = '0';
            dfs(grid, i - 1, j);
        }  if (i > -1 && i < grid.size() && j + 1 > -1 &&
                   j + 1 < grid[0].size() && grid[i][j + 1] == '1') {
            cout << i << " " << j + 1 << endl;
            grid[i][j + 1] = '0';
            dfs(grid, i, j + 1);
        }  if (i > -1 && i < grid.size() && j - 1 > -1 &&
                   j - 1 < grid[0].size() && grid[i][j - 1] == '1') {
            cout << i << " " << j - 1 << endl;
            grid[i][j - 1] = '0';
            dfs(grid, i, j - 1);
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        int ans = 0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[i].size(); j++) {
                if (grid[i][j] == '1') {
                    //cout << i << " + " << j << endl;
                    ans++;
                    dfs(grid, i, j);
                }

                cout << endl;

            }
        }

        return ans;
    }
};