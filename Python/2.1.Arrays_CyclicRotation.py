N=16

def solution(A,K):
    l=len(A)
    if l==0:
        return A
    k = K % l
    if k==0:
        return A
    print(k)
    return A[l-k:]+A[0:l-k]


A=[1,2,3,4,5,6]
k=12
print(solution(A,k))
