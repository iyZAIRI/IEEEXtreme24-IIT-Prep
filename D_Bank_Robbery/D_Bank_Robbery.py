a,b,c = map(int, input().split())
n = int(input())
ans = 0
notes = list(map(int, input().split()))
for note in notes:
    if(note>b and note<c):
        ans+=1
print(ans)