n = int(input())
speed_dist = []
for i in range(n):
    temp_arr = []
    s = input()
    temp_arr.append(int(s.split(" ")[0]))
    temp_arr.append(int(s.split(" ")[1]))
    speed_dist.append(temp_arr)

speed_dist.sort()

x = -1
for i in range(1, n):
    time_diff = speed_dist[i][0] - speed_dist[i - 1][0]
    dist_diff = abs(speed_dist[i][1] - speed_dist[i - 1][1])
    speed = dist_diff/time_diff
    if speed > x:
        x = speed
print(x)