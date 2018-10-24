import math

def solution(X,Y,D):
    dist=abs(X-Y)
    return math.ceil(dist/D)

# O(1) -> 100%
