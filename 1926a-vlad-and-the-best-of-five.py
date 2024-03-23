n = int(input())

for _ in range(n):
    ab = input()
    hsmp = {"A": ab.count('A'), "B": ab.count('B')}

    if (hsmp['A'] > hsmp['B']):
        print('A')
    else:
        print('B')
