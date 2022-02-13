# The Geneva Confection
Problem description [here](https://cemc.uwaterloo.ca/contests/computing/2014/stage%201/seniorEn.pdf)

## Solution Code
* [C++](./main.cpp)

## Approach
First handle the fact that there are multiple test cases by looping through the number of test cases they have then tossing some code to repeat between it. Record all carts. Notice the last card recorded is the first cart the program needs to deal with. Notice the lake can receive carts from either the mountain top or the branch. Create a loop starting from the last cart inputted (the first cart on the mountain top) and keep track of which ingredient the lake needs (starts at 1). From the mountain, the cart can either go to the lake if it contains the ingredient which the lake needs or slide into the branch if it's not an ingredient the lake needs. Notice the branch acts like a stack. If the current mountain cart is the same as the ingredient the lake needs, slide it into the lake (increase the ingredient the lake needs by one), otherwise recursively check if the branch has the ingredient the lake needs until it doesn't. When it doesn't, check if the cart can go into the lake again and if not, slide it into the branch. At the end, if the ingredient the lake needs is one higher than the number of ingredients (`n + 1`) then all ingredients have been delivered ("Y"), otherwise they have not ("N").