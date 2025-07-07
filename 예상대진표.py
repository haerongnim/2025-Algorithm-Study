
def solution(n,a,b):
    temp = n
    j = 0
    while(temp!=1):         # 지수를 구한다
        temp = temp / 2
        j+=1

    while(j > 0):       # 지수만큼 반복
        n = n/2
        if(n >= min(a, b) and n < max(a, b)):
            return j
        
        elif(min(a, b) > n):        #만약 N/2한 수보다 a, b 모두 크다면 n만큼 빼준다.
            a -= n
            b -=n
        j-=1

    return j
