part = 0
whole = 0

mod = 1e9 + 7
ans = 0

n, k = map(int, input().split())
a = list(map(int, input().split()))
print(a)

for i in range(n):
    part = 0
    for j in range(i+1, n):
        if a[j] < a[i]: part += 1 
    whole = part
    for j in range(i):
        if a[j] < a[i]: whole += 1 
    ans = (ans + part * k + whole * k * (k-1) / 2) % mod

print(int(ans))
