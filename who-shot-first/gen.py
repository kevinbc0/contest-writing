import string
import sys
from random import randint, choice

def main():
    arg = int(sys.argv[1])
    n = randint(arg, arg * 2)
    print n

    fastest = randint(1, arg)
    findex = randint(2, n - 1)
    
    for i in xrange(n):
        name = ''.join(choice(string.ascii_uppercase) for _ in range(12))
        print '%d %s' % (fastest if i == findex else (fastest + randint(2, arg)), name)


if __name__ == "__main__":
    main()
