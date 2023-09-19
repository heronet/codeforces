n = int(input())
text = set(input().lower())

if n < 26 or len(text) < 26:
    print("NO")
else:
    print("YES")
