# 칸토어 집합

def partition(left, right):
    len = right - left + 1
    len = len // 3

    for i in range(left + len, right - len + 1):
        str[i] = " "

    if(left + 2 != right):
        partition(left, left + len - 1)
        partition(right - len + 1, right)

def printResult():
    for i in range(len(str)):
        print(str[i], end = "")
    print()

while True:
    try:
        n = int(input())
        str = []
        for i in range(3 ** n):
            str.append("-")

        if(len(str) > 1):
            partition(0, len(str) - 1)

        printResult()
    except:
        break
