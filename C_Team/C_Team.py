n = int(input())
c=0
for _ in range(n):
    if sum(list(map(int,input().split())))>=2:
           c+=1

print(c)