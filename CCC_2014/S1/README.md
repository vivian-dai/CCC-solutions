# Party Invitation
Problem description [here](https://cemc.uwaterloo.ca/contests/computing/2014/stage%201/seniorEn.pdf)

## Solution Code
* [Python](./main.py)

## Approach
Starting from the end of the list (because deleting an earlier index will mess up the later index of things later in the list), remove every `r`th number. Repeat `m` times. Output whatever is left.