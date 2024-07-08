for _ in range(int(input())):
    x, y, z = map(int, input().split())

    ans = x + y + z

    for n in range(min(x,y,z), max(x,y,z) + 1):
        calc = abs(x-n) + abs(y-n) + abs(z-n)
        ans = calc if calc < ans else ans

    print(ans)