#include <bits/stdc++.h>
#include <queue>
using namespace std;

int n;
int paths[10001][10001];
bool visited[10001];
int min_steps = INT_MAX;
int main(){
    std::cin >> n;
    for (int i = 1; i <= n;i++) {
        int m;
        std::cin >> m;
        paths[i][0] = m;
        for (int j = 1; j <= m;j++) {
            std::cin >> paths[i][j];
        }
    }

    queue<std::pair<int, int>> queue;
    queue.push({1, 1});
    visited[1] = true;
    while (!queue.empty()) {
        std::pair<int, int>node = queue.front();
        queue.pop();
        int current_page = node.first;
        int steps = node.second;
        if ((paths[current_page][0] == 0) && (steps < min_steps)) {
            min_steps = steps;
        } else {
            for (int i = 1;i <= paths[current_page][0];i++) {
                if (!visited[paths[current_page][i]]) {
                    queue.push({paths[current_page][i], steps + 1});
                    visited[paths[current_page][i]] = true;
                }
            }
        }
    }

    bool all_visited = true;
    for (int i = 1;i <= n;i++) {
        if (!visited[i]) {
            all_visited = false;
        }
    }

    printf("%c\n%d\n", all_visited? 'Y':'N', min_steps);
    return 0;
}