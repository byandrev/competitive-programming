t = int(input())

def solve():
    n = int(input())
    ans = 0

    for _ in range(n):
        play = input()
        for i in range(len(play)-1):
            if play[i] == 'C' and play[i+1] == 'D':
                ans += 1

    print(n-ans)


for _ in range(t):
    solve()
