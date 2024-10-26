# 괄호의 값

bracket = list(input())
stack = []
cal = 1
result = 0

for i in range(len(bracket)):
    if bracket[i] == '(':
        stack.append(bracket[i])
        cal *= 2

    elif bracket[i] == '[':
        stack.append(bracket[i])
        cal *= 3

    elif bracket[i] == ')':
        if not stack or stack[-1] == '[':
            result = 0
            break
        if bracket[i - 1] == '(':
            result += cal
        stack.pop()
        cal //= 2
    
    elif bracket[i] == ']':
        if not stack or stack[-1] == '(':
            result = 0
            break
        if bracket[i - 1] == '[':
            result += cal
        stack.pop()
        cal //= 3

if stack:# 스택에 아직 원소가 남아 있으면 0 출력
    print(0)
else:
    print(result)

        