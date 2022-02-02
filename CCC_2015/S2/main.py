j = int(input())
a = int(input())

jerseys = []
for i in range(j):
    jerseys.append(input())

satisfied_athletes = 0

for i in range(a):
    order = input().split()
    if order[0] == "S" and jerseys[int(order[1]) - 1] is not False:
        satisfied_athletes += 1
        jerseys[int(order[1]) - 1] = False
    elif order[0] == "M" and (jerseys[int(order[1]) - 1] == "M" or jerseys[int(order[1]) - 1] == "L"):
        satisfied_athletes += 1
        jerseys[int(order[1]) - 1] = False
    elif order[0] == "L" and jerseys[int(order[1]) - 1] == "L":
        satisfied_athletes += 1
        jerseys[int(order[1]) - 1] = False

print(satisfied_athletes)