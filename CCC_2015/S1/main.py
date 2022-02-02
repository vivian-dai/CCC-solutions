k = int(input())

nums = []

for i in range(k):
    n = int(input())
    if n == 0:
        nums.pop()
    else:
        nums.append(n)

total = 0
for num in nums:
    total += num
    
print(total)