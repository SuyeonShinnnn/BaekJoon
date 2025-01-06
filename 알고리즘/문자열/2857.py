# FBI

fbi = []

for i in range(5):
    info = input()
    if 'FBI' in info:
        fbi.append(i + 1)

if len(fbi) == 0:
    print('HE GOT AWAY!')
else:
    for i in fbi:
        print(i, end = ' ')