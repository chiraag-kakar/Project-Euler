def sum_mul(n, d):
    n //= d
    return d*n*(n+1) // 2

N = int(input())
a, b = 3, 5
s = sum_mul(N-1, a) + sum_mul(N-1, b) - sum_mul(N-1, a*b)
print s
