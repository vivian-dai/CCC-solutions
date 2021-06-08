#include <bits/stdc++.h>
#include <string>
using namespace std;

string instructions;
int h_count = 0;
int v_count = 0;
int main(){
    std::cin >> instructions;
    for (int i = 0;i < instructions.length();i++) {
        if (instructions[i] == 'H') {
            h_count++;
        } else if (instructions[i] == 'V') {
            v_count++;
        }
    }
    if (h_count%2 == 0) {
        if (v_count%2 == 0){
            std::cout << "1 2" << endl << "3 4";
        } else if (v_count%2 == 1) {
            std::cout << "2 1" << endl << "4 3";
        }
    } else if(h_count%2 == 1) {
        if (v_count%2 == 0) {
            std::cout << "3 4" << endl << "1 2";
        }else if (v_count%2 == 1) {
            std::cout << "4 3" << endl << "2 1";
        }
    }
    return 0;
}