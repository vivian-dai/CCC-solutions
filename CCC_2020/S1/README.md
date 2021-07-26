# Surmising a Sprinter's Speed
Sherwin this is for you :D  
Problem description is provided [here](https://www.cemc.uwaterloo.ca/contests/computing/2020/ccc/seniorEF.pdf).

## Solution Code
* [Java](./Main.java)
* [C++](./main.cpp)
* [Python](./main.py)

## Approach
Sort all times using a standard library sort (bubble sort and other O(N^2) complexity sorts are too slow and will only give 7/15 points). After the times are sorted, iterate through each time and take the absolute difference between that and the last time. Also take the absolute difference between that distance and the last distance. Speed is distance/time so using the difference in time and difference in distance between that specific instance, the speed at that point can be calculated. Keep track of the maximum speed with some other variable and comparison operators. In the end, output the variable keeping track of the largest speed value.
