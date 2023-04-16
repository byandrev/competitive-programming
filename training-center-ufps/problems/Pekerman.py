t = int(input())

for _ in range(t):
    a, b = map(int, input().split(" "))

    if a >= b:
        print("Pekerman se queda :)")
    else:
        print("Pekerman se va :(")