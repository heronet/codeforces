x = input()
y = input()

if len(x) != len(y):
    print("NO")
elif x == y[::-1]:
    print("YES")
else:
    print("NO")
