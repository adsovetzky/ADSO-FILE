names = ["vaporeon", "jolteon", "flareon", "espeon", "umbreon", "leafeon", "glaceon", "sylveon"]

n = int(input())
s = input()

for name in names:
    if len(name) != n:
        continue
    match = True
    for i in range(n):
        if s[i] != '.' and s[i] != name[i]:
            match = False
            break
    if match:
        print(name)
        break
