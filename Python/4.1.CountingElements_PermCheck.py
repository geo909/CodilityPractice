def solution(A):
    A.sort()
    for i in range(len(A)):
        if i+1!=A[i]:
            print("i is", i)
            return(0)
    return(1)

A = [i for i  in range(1,100000)]
print(solution(A))


# O(N) or O(N*log(N)) -> 100%

