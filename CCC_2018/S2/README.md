# Sunflowers
Problem description [here](https://cemc.uwaterloo.ca/contests/computing/2018/stage%201/seniorEF.pdf)

## Solution Code
* [Python](./main.py)

## Approach
There are only four cases so we can just check all of them:
1. there have been no rotations, print original (smallest number is in top left corner)
2. 90° clockwise rotation in which case the bottom left number is the smallest (top left is smaller than number on right, larger than number below)
3. 180° rotation where the top left number will be the largest
4. 270° rotation where the top left will be smaller than the number to its right and larger than the number below it