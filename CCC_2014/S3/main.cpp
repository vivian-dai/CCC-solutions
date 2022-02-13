#include <bits/stdc++.h>
using namespace std;

int t, n;
int cars[100001];
std::stack<int> branch;

int get_from_branch(int lake_needs) {
    if(!branch.empty() && branch.top() == lake_needs) {
        branch.pop();
        lake_needs++;
        return get_from_branch(lake_needs);
    } else {
        return lake_needs;
    }
}

int run() {
    branch = std::stack<int>();
    std::cin >> n;
    int lake_needs = 1;
    int cur;
    for (int i = 0;i < n;i++) {
        std::cin >> cars[i];
    }
    for (int i = n - 1;i > -1;i--) {
        cur = cars[i];
        if (cur == lake_needs) {
            lake_needs++;
        } else {
            lake_needs = get_from_branch(lake_needs);
            if (cur == lake_needs) {
                lake_needs++;
            } else {
                branch.push(cur);
            }
        }
    }
    lake_needs = get_from_branch(lake_needs);
    if(lake_needs == n + 1) {
        std::cout << "Y" << endl;
    } else {
        std::cout << "N" << endl;
    }
    return 0;
}

int main() {
    std::cin >> t;
    for(int i = 0;i < t;i++) {
        run();
    }
    return 0;
}