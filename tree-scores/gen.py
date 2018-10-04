from random import randint

def main():
    n = 2000
    print(n)

    k = randint(100, 500)
    print(k)

    for _ in range(n):
        l = []
        for __ in range(n):
            l.append(randint(10, 100))
        l = list(map(str, l))
        print(' '.join(l))

main()
