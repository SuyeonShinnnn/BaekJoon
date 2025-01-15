# 사칙연산

n = int(input())

for _ in range(n):
    a, op, b, equal, c = input().split()

    a = int(a)
    b = int(b)
    c = int(c)

    result = False
    
    if op == '+' and a + b == c:
        result = True

    elif op == '-' and a - b == c:
        result = True
    
    elif op == '*' and a * b == c:
        result = True
    
    elif op == '/' and a // b == c:
        result = True

    if result == True:
        print('correct')
    else:
        print('wrong answer')