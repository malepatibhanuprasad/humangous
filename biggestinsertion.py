a,b=map(int,input().split())

c=list(map(int,input().split()))[:a]
d=list(map(int,input().split()))[:b]
f=[]
for i in d:
    c.append(i)
    print(max(c),end=' ')
