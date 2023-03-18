t = int(input())

table = {
    "tijera": ["papel", "lagarto"],
    "papel": ["piedra", "spock"],
    "piedra": ["lagarto", "tijera"],
    "lagarto": ["spock", "papel"],
    "spock": ["tijera", "piedra"]
}

def solve():
    s, r = input().split(" ")

    if s == r:
        return "Empate"

    if table[s] and r in table[s]:
        return "Sheldon"
    
    if table[r] and s in table[r]:
        return "Rajesh"


for _ in range(t):
   print(solve())
