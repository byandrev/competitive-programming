t = int(input())

for _ in range(t):
    n, m = map(int, input().split(" "))
    ans = [0]*m
    ans_line = ""

    for i in range(n):
        row = list(map(int, input().split(" ")))

        for j in range(len(row)):
            ans[j] += row[j]

    for i in range(len(ans)):
        ans_line += str(ans[i]) + (" " if i<m-1 else "")
    
    print(ans_line)