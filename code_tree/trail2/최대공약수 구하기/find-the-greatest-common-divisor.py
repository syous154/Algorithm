n, m = map(int, input().split())

# Please write your code here.
result = 0
for i in range(1, min(n, m)  + 1):
    if n % i == 0 and m % i == 0:
        result = i

print(result)