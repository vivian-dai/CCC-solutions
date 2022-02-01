g = int(input())
p = int(input())
planes = []
docked = []
for i in range(p):
    planes.append(int(input()))
for i in range(g):
    docked.append(False)

planes_docked = 0
for plane in planes:
    if docked[plane - 1]:
        can_dock = False
        for i in range(plane - 2, -1, -1):
            if not docked[i]:
                docked[i] = True
                can_dock = True
                break
        if not can_dock:
            print(planes_docked)
            quit()
    else:
        docked[plane - 1] = True
    planes_docked += 1
print(p)