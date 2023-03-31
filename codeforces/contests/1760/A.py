# Andres Parra Garzon - https://github.com/byandrev

n = int(input())
    
for i in range(n):
    values = list(map(int, input().split(" ")))
    values.sort()
    print(values[1])