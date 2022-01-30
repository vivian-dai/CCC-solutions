n = int(input())
flowers = []
for i in range(n):
    flowers.append(list(map(int, input().split(" "))))

if flowers[0][0] < flowers[0][1] and flowers[0][0] < flowers[1][0]:
    for i in range(len(flowers)):
        for j in range(len(flowers)):
            print(flowers[i][j], end=" ")
        print()
elif flowers[0][0] < flowers[0][1] and flowers[0][0] > flowers[1][0]:
    for i in range(len(flowers)):
        for j in range(len(flowers)):
            print(flowers[n - j - 1][i], end=" ")
        print()
elif flowers[0][0] > flowers[0][1] and flowers[0][0] > flowers[1][0]:
    for i in range(len(flowers)):
        for j in range(len(flowers)):
            print(flowers[n - i - 1][n - j - 1], end=" ")
        print()
else:
    for i in range(len(flowers)):
        for j in range(len(flowers)):
            print(flowers[j][n - i - 1], end=" ")
        print()