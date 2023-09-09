n, h = map(int, input().split())
heights = list(map(int, input().split()))

width = 0

for n in heights:
    if n <= h:
        width += 1
    elif n > h:
        width += 2
print(width)
