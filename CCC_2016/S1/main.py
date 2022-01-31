s1 = input()
s2 = input()
char_count = []
a_count = 0
for i in range(26):
    char_count.append(0)
for c in s1:
    char_count[ord(c) - ord('a')] += 1
for c in s2:
    if c == '*':
        a_count += 1
    else:
        char_count[ord(c) - ord('a')] -= 1
        if char_count[ord(c) - ord('a')] < 0:
            print("N")
            quit()
for i in char_count:
    if i > 0:
        a_count -= i
if a_count == 0:
    print("A")
else:
    print("N")