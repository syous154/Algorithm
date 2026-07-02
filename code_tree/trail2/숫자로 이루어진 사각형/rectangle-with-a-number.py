n = int(input())

# Please write your code here.

def test(n):
    idx =  1
    for _ in range(n):
        for _ in range(n):
            if idx == 10:
                idx = 1
            print(idx, end=' ')
            idx = idx + 1
        print()
test(n)