#include <bits/stdc++.h>
using namespace std;

bool row[5000000];
bool col[5000000];
int m, n;
int k;
char c;
int b;
int count;

int main(){
    std::cin >> m >> n >> k;
    for (int i = 0;i < k; i++) {
        std::cin >> c >> b;
        b--;
        if (c == 'R') {
            row[b] = !row[b];
        } else {
            col[b] = !col[b];
        }
    }
    int count = 0;
    for (int i = 0;i < m;i++) {
        for (int j = 0;j < n;j++) {
            if (row[i]^col[j]) {
                count++;
            }
        }
    }
    std::cout << count;
    return 0;
}