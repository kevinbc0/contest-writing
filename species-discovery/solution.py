def main():
    n = int(input())
    sol = []
    for i in range(n):
        l = input().strip().split()
        sol.append(l[i])

    print(' '.join(sol))

main()
