# 백대열

n, m = map(int, input().split(":"))

if n > m:
    value = n
    divider = m
elif n <= m:
    value = m
    divider = n

while True:
    rest = value % divider 
    if rest == 0:
        break

    value = divider
    divider = rest

n //= divider
m //= divider

print(f"{n}:{m}")