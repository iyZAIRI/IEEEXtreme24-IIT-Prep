   
t = int(input())
for _ in range(t):
    n = int(input())
    arr = list(map(int,input().split(' ')))
    for i in arr:
        if(arr.count(i)%2==1):
            print("YES")
            break
    else:
        print("NO")

