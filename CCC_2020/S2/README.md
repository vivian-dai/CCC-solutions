# Escape Room
Problem description [here](https://www.cemc.uwaterloo.ca/contests/computing/2020/ccc/seniorEF.pdf) (scroll down).

## Solution Code
* [Java](./Main.java)

## Approach
The first thing to keep in mind is factoring is slower than multiplying. [BFS](https://www.geeksforgeeks.org/breadth-first-search-or-bfs-for-a-graph/) from backwards (end to start) with multiplication rather than forwards (start to end wth factoring).  
The second thing to keep in mind is it would be way too slow to scan through the entire maxtrix each time. At the beginning, while (or after) taking input, map the product and the coordinates. Later use these maps of product to coordinates with that product to reduce the number of iterations through the maze to just once.
