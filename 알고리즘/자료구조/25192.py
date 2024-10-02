# 인사성 밝은 곰곰이

n = int(input())
userSet = set()
userList = []
enterStarted = False

for i in range(n):
    user = input()
    if user == "ENTER":
        enterStarted = True
        userList.extend(list(userSet))
        userSet = set()
    elif user not in userSet and enterStarted:
        userSet.add(user)

userList.extend(list(userSet))
print(len(userList))