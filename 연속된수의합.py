def solution(num, total):
    answer = []
    if(num % 2 == 1):   #Case Odd
        mid = total / num
        start = mid - ((num-1)/2)
        for i in range(num):
            answer.append(start)
            start+=1
    else:
        mid = int(total / num)
        print(mid)
        start = mid - (num/2-1)
        for i in range(num):
            answer.append(start)
            start+=1
    return answer
