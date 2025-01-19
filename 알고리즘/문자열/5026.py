# 박사 과정

n = int(input())

for _ in range(n):
    formula = input()

    if formula == "P=NP":
        print('skipped')

    else:
        formula = formula.split('+')
        print(int(formula[0]) + int(formula[1]))