# Ragaman
Problem description [here](https://cemc.uwaterloo.ca/contests/computing/2016/stage%201/seniorEn.pdf)

## Solution Code
* [Python](./main.py)

## Approach
Count how many letters and wildcards are in each string. If the number of letters are the same and there are no wildcards, then the two strings are anagrams. If there are wildcards, they only appear in the second string. The two strings are anagrams if the number of wildcards is equal to the number of letters that the second word doesn't have but the first word does. If the second word ever has more of a letter than the first, they are not anagrams.