from random import random
from random import randint
import sys

def main():
    w = randint(int(sys.argv[1]), 2 * int(sys.argv[1]))
    print w

    a = randint(int(sys.argv[2]), int(sys.argv[2]))
    syllabus = []
    for i in range(w):
        syllabus.append([])

    for i in range(a):
        name = 'HW' + str(i)
        syllabus[randint(0, w - 1)].append(name)
        syllabus[randint(0, w - 1)].append(name)

    for week in syllabus:
        size = len(week)
        output = ''
        output += str(size)

        for name in week:
            output += ' ' + name

        print output 
        

if __name__ == '__main__':
    main()
