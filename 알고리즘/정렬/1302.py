# 베스트셀러

n = int(input())
book = {}

for i in range(n):
    bookName = input()
    if bookName in book:
        book[bookName] += 1
    else:
        book[bookName] = 1

bestSeller = [name for name, c in book.items() if max(book.values()) == c]

if len(bestSeller) > 1:
    bestSeller.sort()

print(bestSeller[0])