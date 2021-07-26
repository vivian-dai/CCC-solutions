n = int(input())
paths = {}
min_steps = 99999999

# initialize all possible paths in a dictionary
for i in range(n):
    line = input().split(" ")
    m = int(line[0])
    connected = []
    for j in range(m):
        connected.append(int(line[j + 1]))
    paths[i + 1] = connected

# set all visited to false
visited = []
for i in range(n):
    visited.append(False)

queue = []
queue.append((1, 1))
visited[0] = True
while len(queue) > 0:
    node = queue.pop(0)
    current_page = node[0]
    steps = node[1]
    if len(paths[current_page]) == 0 and steps < min_steps:
        min_steps = steps
    else:
        for path in paths[current_page]:
            if not visited[path - 1]:
                queue.append((path, steps + 1))
                visited[path - 1] = True

all_visited = True
for visit in visited:
    if not visit:
        all_visited = False

print("Y" if all_visited else "N")
print(min_steps)