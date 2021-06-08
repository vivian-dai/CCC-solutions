# Pretty Average Primes

Problem [here](https://cemc.uwaterloo.ca/contests/computing/2019/stage%201/seniorEF.pdf)

## Solution Code

* [Python](./main.py)
* [C++](./main.cpp)

## Approach

I'm honestly pretty surprised this solution passed (especially in Python) anyways, create a function to do the task `T` times. The function ("the task") is uh... *loop through absolutely every number between 2 and `N*2` then see if it's prime by **looping through every number between 2 and the square root of the target number*** yeah. I'm not sure how this passed on time but it works.
