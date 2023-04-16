t = int(input())

for _ in range(t):
    year = int(input())

    if year > 18:
        print("19"+str(year))
    else:
        if year <= 9:
            print("200"+str(year))
        else:
            print("20"+str(year))