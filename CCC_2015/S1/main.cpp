#include <bits/stdc++.h>
using namespace std;

std::stack<int> nums;
int k, c, total;

int main () {
    std::cin >> k;
    for(int i = 0;i < k;i++) {
        std::cin >> c;
        if(c == 0) {
            nums.pop();
        } else {
            nums.push(c);
        }
    }
    total = 0;
    while(!nums.empty()) {
        total += nums.top();
        nums.pop();
    }
    std::cout << total;
    return 0;
}