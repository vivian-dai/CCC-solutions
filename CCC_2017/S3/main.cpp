#include <bits/stdc++.h>
using namespace std;

int n;
int lengths[2001];
int fence[4001];
int longest, ways;

int main(){
    std::cin >> n;
    for (int i = 0;i < n;i++) {
        int l;
        std::cin >> l;
        lengths[l]++;
    }
    
    for (int i = 1;i < 2001;i++) {
        for (int j = 1; j <= i;j++) {
            if (i == j) {
                fence[i*2] += lengths[i]/2;
            } else {
                fence[i + j] += min(lengths[i], lengths[j]);
            }
        }
    }
    longest = 0;
    ways = 0;
    for (int i = 1;i < 4001;i++) {
        if (fence[i] > longest) {
            longest = fence[i];
            ways = 1;
        } else if (fence[i] == longest) {
            ways++;
        }
    }
    std::cout << longest << " " << ways << endl;
    return 0;
}