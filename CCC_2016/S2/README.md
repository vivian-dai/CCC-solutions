# Tandem Bicycle
Problem description [here](https://cemc.uwaterloo.ca/contests/computing/2016/stage%201/seniorEn.pdf)

## Solution Code
* [Python](./main.py)

## Approach
There are two cases:
1. question one where you must find the sum of the minimum possible speed which can be done by sorting both lists of cyclists and pairing the slowest from one town up with the slowest from the other, the fastest from one town with the fastest from the other and so on. Since the bike goes at the speed of the faster cyclist, we add the larger number in the pair.
2. question two where you need to find the largest sum among possible pairs which can be done by sorting both lists of cyclists and pairing the slowest of one town up with the fastest of the other, second slowest with second fastest, etc. Whichever cyclist is the fastest among those pairs will get their speed added.