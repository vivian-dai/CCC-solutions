# Choose your own path
Problem description [here](https://www.cemc.uwaterloo.ca/contests/computing/2018/stage%201/juniorEF.pdf)

## Solution Code
* [Python](./main.py)
* [C++](./main.cpp)

## Approach
Store which pages each page can go to (`paths`) in a dictionary/map/similar data structure. Store the state of if the page has been visited (`visited`). Put the first page into a queue while also keeping track of the number of steps taken to get to that point. Pull a page out of the queue and see what other pages it can go to. If it's an end page, check to see if it takes less steps than the current least steps. Iterate through thr `visited` array to see which pages are visited.
