# 접미사 배열

s = input()
suffix = []

for i in range(len(s)):
    suffix.append(s[i : len(s) + 1])

suffix.sort()
for i in suffix:
    print(i)