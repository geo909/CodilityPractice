def solution(S):
    if S=="":
        return 1
    if len(S) % 2 == 1:
        return 0
    stack = 0
    for i in S:
        if i=='(':
            stack+=1
        else:
            if stack==0:
                return 0
            else:
                stack-=1
    if stack == 0:
        return 1
    else:
        return 0

S=""
print(solution(S))

# O(N) -> 100%
