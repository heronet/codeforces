tc = int(input())

for _ in range(tc):
    n = int(input())

    # input n * n matrix
    arr = []
    for i in range(n):
        line = input()
        arr.append(line.count('1'))

    res = "TRIANGLE"

    for index, num in enumerate(arr):
        # found the beginning
        if num > 0:
            # square
            if index + 1 < len(arr):
                if arr[index + 1] == num:
                    res = "SQUARE"
                    break

    print(res)
