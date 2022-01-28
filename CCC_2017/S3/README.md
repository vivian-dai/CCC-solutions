# Nailed It!
Problem description [here](https://cemc.uwaterloo.ca/contests/computing/2017/stage%201/seniorEF.pdf).

## Solution Code
* [C++](./main.cpp)

## Approach
The most straightforward approach is recording the length of every board then finding the length of every possible sum of boards then looking through that and then counting through those. This is a working approach but it will be too slow because `N` can be at most 1000000.  
If we store the number of lengths rather than each individual board, this will take up less space (2000 vs 1000000). As the board will be at most of length 2000, the largest sum possible is 4000. We can loop through all the board lengths to sum up the total number of ways to make a certain board length. Keep in mind we can have boards of the same length combine together. In the end, we loop through to find the largest length and the number of ways to achieve that.