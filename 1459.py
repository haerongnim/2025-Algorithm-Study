import math
X, Y, W, S = input().split()
X, Y, W, S = int(X), int(Y), int(W), int(S)

if S < 2*W:
    if W > S:
        result = min(X, Y) * S + math.floor(abs(X - Y) / 2) * 2 * S + W * (abs(X - Y) % 2)
    else:
        result = min(X, Y) * S + abs(X - Y) * W
else:
    result = (X + Y) * W

result = int(result)
print(result)