n = int(input())
min_name = ''
min_time = 10000000

for _ in range(n):
    time, name = input().split(' ', 1)
    if int(time) < min_time:
        min_time = int(time)
        min_name = name

print(min_name)
