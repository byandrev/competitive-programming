# Andres Parra Garzon - https://github.com/byandrev

t = int(input())

def solve():
    n = list(map(int, input().split(" ")))
    n.sort()
    return n[1]

for _ in range(t):
    print(solve())
