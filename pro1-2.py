from itertools import combinations
a,b=map(int,input().split())
li=len(str(a))
l=list(combinations(str(a),li-b))
l=sorted(l)
print(*l[0],sep='')
