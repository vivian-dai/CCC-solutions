# Flipper

Problem [here](https://cemc.uwaterloo.ca/contests/computing/2019/stage%201/seniorEF.pdf)

## Solution Code

* [Python](./main.py)

## Approach

Notice that 2 horizontal flips will cancel out and that 2 vertical flips will also cancel out. This means there are only 4 states:  
Even number of vertical flips, even number of horizontal flips:

    1 2
    3 4
Even number of vertical flips, odd number of horizontal flips:

    3 4
    1 2
Odd number of vertical flips, odd number of horizontal flips:

    4 3
    2 1
Odd number of vertical flips, even number of horizontal flips:

    2 1
    4 3
Count the number of of "H"s and "V"s then determine which state to output.