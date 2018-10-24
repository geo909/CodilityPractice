def solution(A):
    total=0
    sum=0
    i=len(A)-1
    while i>=0:
        while A[i]==1 and i>=0:
            sum+=1
            i-=1
        while A[i]==0 and i>=0:
            total+=sum
            if total > 1000000000:
                return -1
            i-=1
    return total

A=[0,1,0,1,1,0,0,0,0,1]
print(solution(A))

# O(N) -> 100%
