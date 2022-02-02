# Gates
Problem description [here](https://cemc.uwaterloo.ca/contests/computing/2015/stage%201/seniorEn.pdf)

## Solution Code
* [Python](./main.py)

## Approach
Each plane can occupy a gate that is equal to or smaller than it. As a result, the most optimal place to put each plane as they come in is the largest unfilled spot that they can reside in (eg. 4 can be in spots 1, 2, 3, 4 so the largest one of those that doesn't already have a plane is the best place to put a plane numbered 4). Do this until it's not possible to fill in planes.