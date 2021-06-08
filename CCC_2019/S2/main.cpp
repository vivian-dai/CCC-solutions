#include <bits/stdc++.h>
using namespace std;

int is_prime(int num) {
    for (int i = 2;i <= sqrt(num) + 1;i++) {
        if (num%i == 0) {
            return 0;
        }
    }
    return 1;
}

int n = 0;
int solve() {
    std::cin >> n;
    for (int i = 2;i < n*2;i++) {
        if (is_prime(i) && is_prime(n*2 - i)) {
            std::cout << i << " " << n*2 - i << endl;
            return 0;
        }
    }
}

int t;
int main(){
    std::cin >> t;
    for (int i = 0;i < t;i++) {
        solve();
    }
    return 0;
}