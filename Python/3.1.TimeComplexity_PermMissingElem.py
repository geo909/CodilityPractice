def solution(A):
    A+=[-1]
    A.sort()
    for i in range(1,len(A)):
        if i != A[i]:
            return i
    return len(A)

A=[1]
print(solution(A))

# O(N) or O(N * log(N)) -> 100%
