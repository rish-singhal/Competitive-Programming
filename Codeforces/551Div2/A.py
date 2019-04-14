n, t = map(int, input().split())
s = []
for __ in range(n):
    a, b = map(int, input().split())
    a -= t
    if a < 0:
        a = a % b
    s.append(a)
print(s.index(min(s))+1)
