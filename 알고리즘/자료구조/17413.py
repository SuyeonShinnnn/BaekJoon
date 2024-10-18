# 단어 뒤집기 2

def printStack(stack):
    print(stack[-1::-1], end = '')

s = input()
stack = ''

isTag = False

for i in s:
    if isTag == False and i != ' ' and i != '<':
        stack += i
    elif isTag == True and i != '>':
        print(i, end = '')
    
    if (i == '<' or i == ' ') and isTag == False:
        printStack(stack)
        if i == ' ':
            print(end = ' ')
        stack = ''

    if i == '<':
        print(i, end = '')
        isTag = True
    elif i == '>':
        print(i, end = '')
        isTag = False

printStack(stack)    