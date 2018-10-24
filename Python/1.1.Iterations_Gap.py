N=16

def solution(N):
    b=format(N,'b')[::-1]   # Left to right
    i=b.index('1')+1        # start from here

    MAX=0
    gap=0
    while (i < len(b)):
        if (b[i] == '0'):
            while (b[i]=='0'):
                gap+=1
                i+=1
            if gap > MAX:
                MAX=gap
        i+=1
        gap=0


    return MAX
