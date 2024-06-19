a = list(map(int, input().split() ))

a.sort(reverse=True)

for now in a:
    print(now, end=' ')