from random import random
import sys

def main():
    n = 100000 if len(sys.argv) == 1 else int(sys.argv[1])
    str = ''
    for i in range(n):
        str = str + ('.' if random() < 0.9 else 'E')
    with open('out.txt', 'w') as f:
        sys.stdout = f
        print str

if __name__ == '__main__':
    main()
