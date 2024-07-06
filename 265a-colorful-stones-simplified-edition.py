s, t, count, i = input(), input(), 1, 0

for n in t:
    if n == s[i]:
        count += 1
        i += 1
print(count)
