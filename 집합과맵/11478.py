# 11478번_서로 다른 부분 문자열의 개수
text = input()
s = set()

for i in range(len(text)):
    for j in range(i, len(text)):
        s.update([text[i : j + 1]])

print(len(s))