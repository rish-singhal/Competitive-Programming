n = int(input())
s = list(input())
l, r = s.count('('), s.count(')')
for i in range(n):
    if s[i] == "?":
        if 2*l < n:
            l += 1
            s[i] = "("
        else:
            s[i] = ")"

cnt = 0
for i in range(n):
    cnt += 1 if s[i] == "(" else -1
    if (cnt < 1 and i < n-1) or (cnt != 0 and i == n-1):
        print(":(")
        exit(0)

print("".join(s))
