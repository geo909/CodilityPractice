def solution(A):
    S=sum(A)
    MIN=abs(-S+2*A[0])

    PREV=A[0] # P=1
    for P in range(2,len(A)):
        PREV+=A[P-1]
        D=abs(-S+2*PREV)
        if D<MIN:
            MIN=D
    return MIN

A=[10 for i in range(100)]
print(solution(A))

# O(N) -> 100%

