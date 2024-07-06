m, n = map(int, input().split())

def isPrime(n: int):
    for i in range(2, n):
        if n % i == 0:
            return False
    return True

if not isPrime(n):
    print("NO")
else:
    ans = "YES"
    for i in range(m + 1, n):
        if isPrime(i):
            ans = "NO"
            break
    print(ans)