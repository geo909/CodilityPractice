def solution(A):
    if len(A)==3:
        return A[0]*A[1]*A[2]

    A.sort()
    if 0 in A:
        if A[-1]==0:
            return 0
        else:
            A.remove(0)
    N=len(A)
    nn=0
    i=0
    while i<N and A[i]<0:
        nn+=1
        i+=1
    if nn <=1:
        return A[-1]*A[-2]*A[-3]
    else:
        p1=A[0]*A[1]*A[-1]
        p2=A[-1]*A[-2]*A[-3]
        if p1 > p2:
            return p1
        else:
            return p2

A=[-5,0,1,2,3,4]
print(solution(A))

# O(N*logN) -> 100%
