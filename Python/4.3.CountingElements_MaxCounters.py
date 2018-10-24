def solution(N,A):
    M=len(A)
    C=N*[0]
    max=0
    for i in A:
        if i==N+1:
            C=N*[max]
        else:
            C[i-1]+=1
            if C[i-1]>max:
                max=C[i-1]
    return C



A=[3,4,4,6,1,4,4]
N=5

print(solution(N,A))

# O(N+M) -> 88%
