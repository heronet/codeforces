n, k = map(int, input().split())

rem = 240 - k
spent = 0
solved = 0
for i in range(1, n + 1):
    spent = spent + 5 * i
    if spent > rem:
        break
    solved += 1
print(solved)
