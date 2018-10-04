import random
import string

def main():
    n = random.randint(5, 10)
    print(n)

    for _ in range(n):
        l = [''.join([random.choice(string.ascii_lowercase) for x in range(n)]) for y in range(n)]
        print(' '.join(l))

main()
