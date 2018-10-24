def solution(S):
    if S==[]:
        return 1
    if len(S) % 2 != 0:
        return 0

    toappend=['(','{','[']
    pair={')':'(','}':'{',']':'['}
    stack=[]
    for s in S:
        if s in toappend:
            stack.append(s)
        elif len(stack)==0:
            return 0
        else:
            check = stack.pop()
            if check != pair[s]:
                return 0
    if len(stack)==0:
        return 1
    else:
        return 0

S="{[]}(()()({{{}}}[])"
N=100000
S=N*'('+N*')'
print(S)
print(solution(S))

# O(N) -> 100%

        
        
