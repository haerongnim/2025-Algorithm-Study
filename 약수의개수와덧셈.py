import math

def solution(left, right):
    answer = 0
    temp = left
    while(temp <= right):
        if(math.sqrt(temp) % 1 == 0): 
            answer -= temp
        else: answer += temp
        temp+=1
    return answer
