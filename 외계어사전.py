def solution(spell, dic):
    answer = 2
    print(len(dic))
    for i in range(len(dic)):
        #print(dic[i])
        #print(len(spell))
        if(len(dic[i])==len(spell)):
            temp = []
            for k in range(len(spell)):
                temp.append(spell[k])
            #print(temp)
            for j in range(len(spell)):
                if(dic[i][j] in temp):
                    temp.remove(dic[i][j])
                    #print(temp)
            if(temp == []): answer = 1
                    
    return answer
