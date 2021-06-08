n = int(input())
temp_string = input()
waves = temp_string.split(" ")
for i in range(n):
    waves[i] = int(waves[i])
waves.sort()
if n%2 == 0:
    high_tide_pointer = int(n/2)
    low_tide_pointer = high_tide_pointer - 1
else:
    low_tide_pointer = int(n/2)
    high_tide_pointer = low_tide_pointer + 1

while high_tide_pointer < n:
    print(waves[low_tide_pointer], waves[high_tide_pointer], end=" ")
    low_tide_pointer -= 1
    high_tide_pointer += 1

if n%2 == 1:
    print(waves[0])