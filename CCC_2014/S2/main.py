n = input()
a = input().split()
b = input().split()
partner_map = {}

for i in range(len(a)):
    partner_map[a[i]] = b[i]

for i in range(len(a)):
    key = a[i]
    val = partner_map[key]

    if not partner_map[val] == key:
        print("bad")
        quit()
    elif key == val:
        print("bad")
        quit()

print("good")