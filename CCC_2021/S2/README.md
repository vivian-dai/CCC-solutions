# Modern Art
Problem description [here](https://www.cemc.uwaterloo.ca/contests/computing/2021/ccc/seniorEF.pdf).

## Solution Code
* [Python](./main.py)

## Approach
There are two possible states for a tile to be in: black or gold. If the specific tile has been toggled an even number of times, it will be black. If the tile has been toggled an odd number of times it will be gold. The total number of times the tile would be toggled is equal to the number of times its row is toggled + the number of times its column has been toggled. As a result, we don't need to keep track of how many times each tile has been toggled, instead keeping track of how many times each row and column has been toggled is enough.  
As there are only two options that toggle back and forth, we actually do not even need to keep count of how many times the row/column has been toggled. We can keep track of the state of the row/column's toggle with just a boolean variable. Each time the row/column is brushed, just perform a not operation on the boolean.  
At the end, we can evaluate each tile. If a tile's row has been toggled an even number of times and its column an even number of times then the tile was toggled an even number of times. We know even + even = even, odd + odd = even, and even + odd = odd (order does not matter). Through this we can construct:
|Row|Column||Tile|
|-|-|-|-|
|even|even||even|
|even|odd||odd|
|odd|even||odd|
|odd|odd||even|
Translating this into our booleans representing even and odd, we can construct:
|Row|Column||Tile|
|-|-|-|-|
|False|False||False|
|False|True||True|
|True|False||True|
|True|True||False|
which looks exactly like a [truth table for XOR](https://en.wikipedia.org/wiki/Exclusive_or#Truth_table). We can then get the parity of the tile by performing an XOR operation on its column and row. Count each tile that returns true and output final answer.