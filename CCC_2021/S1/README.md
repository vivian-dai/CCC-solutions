# Crazy Fencing
Problem description [here](https://www.cemc.uwaterloo.ca/contests/computing/2021/ccc/seniorEF.pdf).

## Solution Code
* [Python](./main.py)

## Approach
Take in `n` as well as the vertical and horizontal values. Set `area` as 0. Realize you can factor the 1/2 out of the area of the entire shape:

$$
\frac{1}{2}(\text{area}_1) + \frac{1}{2}(\text{area}_2) + ... + \frac{1}{2}(\text{area}_n) = \frac{1}{2}\sum (\text{area})
$$

This also means we only need to divide the total area by 2 once at the very end. Since we're dividing by two, there are only two cases: the number is even (it doesn't have a decimal) or the number is odd (it has a .5 at the end). We can put a conditional at the end to check for it.