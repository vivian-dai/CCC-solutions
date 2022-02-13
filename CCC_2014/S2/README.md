# Assigning Partners
Problem description [here](https://cemc.uwaterloo.ca/contests/computing/2014/stage%201/seniorEn.pdf)

## Solution Code
* [Python](./main.py)

## Approach
Start by constructing a map to reduce the amount of looping done. The map should map each name in the first line to each name in the second line. Loop through the map and if `map[key] == map[map[key]] (map[val])` and they aren't the same name, it's a valid partner set. As soon as an invalid partner set appears, print "bad" and terminate. If the program can make it to the end, the partner set was good.