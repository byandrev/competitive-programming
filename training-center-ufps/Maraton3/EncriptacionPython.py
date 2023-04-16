n = int(input())


def solve():
    text = input()
    ans = ""
    ans_final = ""

    for i in range(len(text)):
        if text[i].isalpha():
            ans += chr(ord(text[i])+3)
        else:
            ans += text[i]
    
    ans = ans[::-1]
    ans_final = ans[0:int(len(ans)/2)]
    start = int(len(ans)/2)
    for i in range(start, len(ans)):
        ans_final += chr(ord(ans[i])-1)

    print(ans_final)


for _ in range(n):
    solve()
