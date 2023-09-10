x = input()

while True:
    x = str(int(x) + 1)
    if len(set(list(x))) == 4:
        break
print(x)
