# Andres Parra Garzon - https://github.com/byandrev

t = int(input())
    
for i in range(t):
    n = int(input())
    ans = 0
    string = input()
    
    for letter in string:
        if ord(letter)-96 > ans:
            ans = ord(letter)-96
    
    print(ans)