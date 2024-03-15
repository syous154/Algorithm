s = input()
a = []
for i in range(len(s)):
    a.append(s[i:])
a.sort()
for i in range(len(a)):
    print(a[i])