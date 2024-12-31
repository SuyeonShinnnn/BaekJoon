# 모음의 개수

vowel = ['a', 'e', 'i', 'o', 'u']
n = list(input())
count = 0

for i in n:
    if i in vowel:
        count += 1
print(count)