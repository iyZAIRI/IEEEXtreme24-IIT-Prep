scores = list(map(int,input().split(' ')))
scores_sum = sum(scores)
def check_scores():
    for i in range(4):
        for j in range(i+1,5):
            for k in range(j+1,6):
                if (scores[i] + scores[j] + scores[k]!=0) and (scores_sum//2 == scores[i] + scores[j] + scores[k]):
                    print("YES")
                    return 
    print("NO")
    
if(scores_sum%2!=0):
    print("NO")
elif scores_sum == 0:
    print("YES")
else:
    check_scores()