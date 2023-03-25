import sys
input = sys.stdin.readline

n, m = map(int, input().split())
pokemon = {}
problem = []

for i in range(n):
    name = input().rstrip()
    pokemon[name] = i
    
for _ in range(m):
    problem.append(input().rstrip())

pokemon_list = list(pokemon.keys())

for p in problem:
    if p.isdigit():
        print(pokemon_list[int(p)-1])
    else:
        print(pokemon[p]+1)