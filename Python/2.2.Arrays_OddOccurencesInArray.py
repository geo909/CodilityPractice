# This one is O(N) or O(N*log(N))
# Score 100

def solution(A):
    count={}
    for i in A:
        if not i in count:
            count[i]=1
        else:
            count[i]+=1
    for i in count:
        if count[i] % 2 == 1:
            return i


A=[1,1,2,2,3,3,2,2,7,8,7,8,2]
print(solution(A))


