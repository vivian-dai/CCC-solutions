# High Tide, Low Tide
Problem description [here](https://cemc.uwaterloo.ca/contests/computing/2017/stage%201/seniorEF.pdf) (scroll down)

## Solution Code
* [Python](./main.py)
* [C++](./main.cpp)

## Approach
Sort the `N` integers then use 2 pointers in the array. One pointer is for the current low tide and the other is for the current high tide. Based on if `N` is odd or even, the pointers are assigned differently. If `N` is even then there's an equal number of high tides and low tides therefore low tide pointer should start at `N/2`. If `N` is odd, there's more low tides than high tides so low tide pointer would start at [ceil(`N/2`)](https://en.wikipedia.org/wiki/Floor_and_ceiling_functions)