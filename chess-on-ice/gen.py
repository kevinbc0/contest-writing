from random import randint

def main():
    print("USA")
    print("Canada")
    
    for _ in range(10):
        c = "USA" if randint(1,2) == 1 else "Canada"
        s = randint(1,8)
        print("%s %d" % (c, s))


if __name__ == "__main__":
    main()
