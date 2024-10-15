# 문서 검색

doc = input()
search = input()

doc1 = doc
doc = doc.split(search)
doc = list(filter(None, doc))

doc2 = ''
for i in doc:
    doc2 += i

count = (len(doc1) - len(doc2)) // len(search)
print(count)