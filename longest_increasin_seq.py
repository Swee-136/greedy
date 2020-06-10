import itertools
n=int(input())
l1=list(map(int,input().split()))
l2=[]
for i in range(n):
    for j in itertools.combinations(l1,i):
        l3=list(j)
        #print(l3)
        if l3==sorted(l3):
            l2.append(l3)
x=(l2[len(l2)-1])
a=len(x)
l4=[]
for i in l2:
    if len(i)==a:
        l4.append(i)
m=tuple(l4[0])
for s in range(1,len(l4)-1):
    if tuple(l4[s])>m:
        m=tuple(l4[s])
print(*list(m))
