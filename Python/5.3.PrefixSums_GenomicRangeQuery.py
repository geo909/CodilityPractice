def solution(S,P,Q):
    N=len(S)
    SS=[]
    for s in S:
       if s=='A':
           SS.append(1)
       elif s=='C':
           SS.append(2)
       elif s=='G':
           SS.append(3)
       elif s=='T':
           SS.append(4)
       else: # then it is T
           return -1

    T=[4*[0] for i in range(N)]

    T[0][SS[0]-1]=1
    for i in range(1,N):
        for j in range(4):
            T[i][j]+=T[i-1][j]
        T[i][SS[i]-1]=T[i-1][SS[i]-1]+1

    M=len(P)
    mins=[]

    for i in range(M): # i=0, 1, 2
        if P[i]==0:
            L=T[Q[i]]
        else:
            L=[ T[Q[i]][j]-T[P[i]-1][j] for j in range(4) ]
        j=0
        while L[j] == 0:
            j+=1
        mins.append(j+1)
    return mins
        


S="CAGCCTA"
P=[2,5,0]
Q=[4,5,6]
print(solution(S,P,Q))

# O(N+M) -> 100%
