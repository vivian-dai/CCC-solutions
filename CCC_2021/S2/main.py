rows = []
cols = []
m = int(input())
n = int(input())
k = int(input())

for i in range(m):
    rows.append(False)
for i in range(n):
    cols.append(False)

for i in range(k):
    command = input().split(" ")
    command[1] = int(command[1]) - 1
    if command[0] == 'R':
        rows[command[1]] = not rows[command[1]]
    else:
        cols[command[1]] = not cols[command[1]]

count = 0
for i in range(m):
    for j in range(n):
        if rows[i]^cols[j]: count += 1
print(count)