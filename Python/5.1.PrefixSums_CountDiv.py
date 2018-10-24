def solution(A,B,K):
    if A==B:
        if A%K==0:
            return 1
        else:
            return 0
    if A%K == 0:
        l=A/K
    else:
        l=(A//K)+1
    d=B-l*K
    return int(d//K + 1)

A=0
B=11
K=11
print(solution(A,B,K))



