from random import randint, choice
from collections import defaultdict

def main():
    ind = defaultdict(int)
    color = defaultdict(int)
    graph = defaultdict(list)

    n = randint(80000, 100000)
    print(n)

    for i in range(1, n + 1):
        c = randint(1, 8)
        m = randint(0, 10)
        print(c, m)

        color[i] = c

        for _ in range(m):
            d = randint(1, n)
            ind[d] += 1
            graph[i].append(d)
            print(d)

    q = randint(8000, 10000)
    print(q)

    nums = [num for num in range(1, n + 1)]
    ind0 = []
    for i in range(1, n + 1):
        if ind[i] == 0:
            ind0.append(i)

    for _ in range(q):
        query = randint(1, 10)
        if query <= 6:
            r = randint(1, 10)
            if r <= 5:
                x = choice(ind0)
                y = choice(ind0)
                while x == y:
                    y = choice(ind0)
                if color[x] == color[y]:
                    ind0.remove(x)
                    ind0.remove(y)
                    nums.remove(x)
                    nums.remove(y)

                    for dest in graph[x]:
                        ind[dest] -= 1
                        if ind[dest] == 0:
                            ind0.append(dest)

                    for dest in graph[y]:
                        ind[dest] -= 1
                        if ind[dest] == 0:
                            ind0.append(dest)
            else:
                x = choice(nums)
                while x in ind0:
                    x = choice(nums)
                y = choice(nums)
            print(1, x, y)
        else:
            print(2, 0, 0)
main()
