a, b = map(int, input().split())
f, d, s = 0, 0, 0
for _ in range(1, 7):
    if abs(a - _) < abs(b - _):
        f += 1
    elif abs(a - _) > abs(b - _):
        s += 1
    else:
        d += 1
print(f, d, s, sep=' ')
