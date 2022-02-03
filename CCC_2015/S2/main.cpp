#include <bits/stdc++.h>
using namespace std;

char jerseys[1000000];
int j, a;
char s;
int n;

int main() {
    std::cin >> j >> a;
    for(int i = 0;i < j;i++) {
        std::cin >> jerseys[i];
    }
    int satisfied = 0;
    for(int i = 0;i < a;i++) {
        std::cin >> s >> n;
        n--; // 0 indexed
        if ((s == 'L') && (jerseys[n] == 'L')) {
            jerseys[n] = 'X';
            satisfied++;
        } else if ((s == 'M') && ((jerseys[n] == 'M') || (jerseys[n] == 'L'))) {
            jerseys[n] = 'X';
            satisfied++;
        } else if ((s == 'S') && (jerseys[n] != 'X')) {
            jerseys[n] = 'X';
            satisfied++;
        }
    }
    std::cout << satisfied;
    return 0;
}