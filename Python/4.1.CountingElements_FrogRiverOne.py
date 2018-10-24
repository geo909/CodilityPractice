def solution(X,A):
    CT=[0 for p in range(1,X+1)]
    i=0
    uncovered=X
    N=len(A)
    while i<N and uncovered>0:
        if not CT[A[i]-1]:
            CT[A[i]-1]=1
            uncovered-=1
        i+=1
    if 0 in CT:
        return -1
    else:
        return i-1



A=[1,3,1,4,2,3,5,4]
X=5

print(solution(X,A))


# O(N^2) -> 72%
