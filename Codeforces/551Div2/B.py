n, m, h = map(int, input().split())
A = list(map(int, input().split()))
B = list(map(int, input().split()))
an = [list(map(int, input().split())) for _ in range(n)]
for i in range(n):
    for j in range(m):
        if an[i][j] != 0:
            an[i][j] = min(B[i], A[j])
    print(' '.join(map(str, an[i])))
