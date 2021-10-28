n = int(input())

vertical = list(map(int, input().split(" ")))
horizontal = list(map(int, input().split(" ")))

area = 0

for i in range(len(horizontal)):
    area += horizontal[i]*(vertical[i] + vertical[i + 1])
    
if area%2 == 0:
    print(int(area/2))
else:
    print(f"{int(area/2)}.5")