# 단어 퍼즐

count = 1

while True:
    a = input()
    b = input()
    
    if a == b == 'END':
        break
    print('Case %d:' %count, end = ' ')

    if sorted(a) == sorted(b):
        print('same')
    else:
        print('different')
    count += 1