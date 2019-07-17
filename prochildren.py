p=int(input())
l=[]
q=0
for i in range(0,p):
    l.append(i)
for j in range(len(l)):
    for k in range(j+1,len(l)):
        q=q+1
print (q)
