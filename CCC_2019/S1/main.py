instructions = input()
h_count = 0
v_count = 0
for letter in instructions:
    if letter == "H":
        h_count += 1
    elif letter == "V":
        v_count += 1
if h_count%2 == 0:
    if v_count%2 == 0:
        print("1 2\n3 4")
    elif v_count%2 == 1:
        print("2 1\n4 3")
elif h_count%2 == 1:
    if v_count%2 == 0:
        print("3 4\n1 2")
    elif v_count%2 == 1:
        print("4 3\n2 1")