#include <bits/stdc++.h>
using namespace std;

int n;
int waves[100];
int low_tide_pointer;
int high_tide_pointer;
int main(){
    std::cin >> n;
    for (int i = 0;i < n;i++) {
        std::cin >> waves[i];
    }
    sort(waves, waves + n);
    if (n%2 == 0) {
        high_tide_pointer = n/2;
        low_tide_pointer = high_tide_pointer - 1;
    } else {
        low_tide_pointer = n/2;
        high_tide_pointer = low_tide_pointer + 1;
    }
    while (high_tide_pointer < n) {
        std::cout << waves[low_tide_pointer] << " " << waves[high_tide_pointer] << " ";
        low_tide_pointer--;
        high_tide_pointer++;
    }
    if (n%2 == 1) {
        std::cout << waves[0];
    }
    return 0;
}