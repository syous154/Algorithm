def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return a

def lcm(n, m):
    return n * m // gcd(n, m)

n, m = map(int, input().split())

print(lcm(n, m))