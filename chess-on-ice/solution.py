a = input()
b = input()

d = {a: 0, b: 0}

for _ in range(10):
    s = input().split()
    d[s[0]] += int(s[1])

print('Tie' if d[a] == d[b] else (a if d[a] > d[b] else b))
