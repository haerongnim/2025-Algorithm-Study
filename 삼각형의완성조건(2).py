import math
def solution(sides):
    answer = 0
    longest = max(sides)
    for i in range(1, longest+1, 1):
        if(min(sides) + i > longest):
            answer+=1
    for j in range(longest+1, longest+min(sides), 1):
        if(longest+min(sides) > j):
            answer+=1
    #print(answer)
    
    return answer
