# Andres Parra Garzon - https://github.com/byandrev

from fractions import Fraction

def solve(inp):
    line = list(inp.split(" "))

    a = int(line[0])
    b = int(line[1])
    operador = line[2]
    c = int(line[3])
    d = int(line[4])

    ansNumerador = 0
    ansDenominador = 0
    ans = 0

    if operador == "+":
        ans = Fraction(a,b) + Fraction(c,d)
    elif operador == "-":
        ans = Fraction(a,b) - Fraction(c,d)
    elif operador == "*":
        ans = Fraction(a,b) * Fraction(c,d)
    elif operador == "/":
        ans = Fraction(a,b) / Fraction(c,d)

    response = str(ans).replace("/", " ")
    

    if response == "1":
        return "1 1"
    elif len(str(ans).split("/")) == 1:
        return f"{response} 1"
    return response


while True:
    try:
        ins = input()
        print(solve(ins))
    except:
        break

