#include <bits/stdc++.h>
#include <queue>
using namespace std;

int m, n;
int grid[1001][1001];
bool visited[1001][1001];
std::map<int, vector<pair<int, int>>> nums;
queue<pair<int, int>> q;

int main() {
    std::cin >> m >> n;
    for (int i = 1;i <= m;i++) {
        for (int j = 1;j <= n;j++) {
            std::cin >> grid[i][j];
            if (nums.count(grid[i][j]) > 0) {
                nums[grid[i][j]].push_back({i, j});
            } else {
                nums[grid[i][j]] = {{i, j}};
            }
        }
    }

    q.push({m, n});
    visited[m][n] = true;
    while(!q.empty()) {
        std::pair<int, int> point = q.front();
        q.pop();
        if((point.first == 1) && (point.second == 1)) {
            std::cout << "yes\n";
            return 0;
        } else {
            int prod = point.first*point.second;
            for (int i = 0;i < nums[prod].size();i++) {
                std::pair<int, int> pos = nums[prod][i];
                if (!visited[pos.first][pos.second]) {
                    q.push({pos.first, pos.second});
                    visited[pos.first][pos.second] = true;
                }
            }
        }
    }
    std::cout << "no\n";
    return 0;
}