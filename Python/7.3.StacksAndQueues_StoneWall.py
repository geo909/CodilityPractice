def solution(A):
    stack=[A[0]]
    count=1
    i=0
    for a in A:
        while len(stack)>0 and stack[-1]>a:
            stack.pop()
        if len(stack)==0 or a > stack[-1]:
            stack.append(a)
            count+=1
        elif a < stack[-1]:
            count+=1
        i+=1
    return count

A=[5,5,4,7,7,8,6,6,4,6,4,4,1]
A=100000*[1000000000]
A=[1000000000*(-1)^i for i in range(100000)]
print(solution(A))

# O(N) -> 100%
