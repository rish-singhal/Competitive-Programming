t = int(input())
for _ in range(t):
    a, b, c = map(int, input().split())
    d = int(input())
    an = (a * c * d + d * a * b) // c
    print(an)
