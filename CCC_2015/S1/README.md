# Zero That Out
Problem description [here](https://cemc.uwaterloo.ca/contests/computing/2015/stage%201/seniorEn.pdf)

## Solution Code
* [Python](./main.py)
* [C++](./main.cpp)

## Approach
Store all the numbers in a stack like structure, each time there's a `0`, pop off the last element of the stack. Once all numbers are through, find the sum of everything else left in the list.