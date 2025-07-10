def solution(board):
    answer = 0
    n = len(board)
    output = []
    arr = [0] * (n + 2)
    output.append(arr)

    for i in range(n):
        output.append(board[i][:])  #deep copy
    for i in range(1, n+1,1):
        output[i].insert(0,0)
        output[i].insert(n+1, 0)
    output.append(arr)

    for i in range(n):
        for j in range(n):
            if(board[i][j] == 1):
                print(i, j)
                ii = i+1
                jj = j+1
                output[ii-1][jj-1], output[ii][jj-1], output[ii-1][jj], output[ii+1][jj-1], output[ii+1][jj], output[ii-1][jj+1], output[ii][jj+1], output[ii+1][jj+1] = 1, 1, 1, 1, 1, 1, 1, 1

    for i in range(1, n+1, 1):
        print(output[i][1:n+1])
        answer+=output[i][1:n+1].count(0)
    return answer
