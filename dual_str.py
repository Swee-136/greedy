from itertools import combinations
s=input()
n=len(s)
l1=list(s)
def find(l2,k):
    m=""
    for r in l2:
        m+=r
    l3=[]
    a=k[:]
    a=a.replace(m,"",1)
    if m in a:
        l3.append(m)
        l3.append(len(m))
    return l3
k=[]
for i in range(n):
    for j in (combinations(l1,i)):
        l2=list(j)
        k.append(find(l2,s))
l5=[]
d=dict()
l6=[]
for c in k:
    if type(c)==list:
        if len(c)>1:
            d[c[0]]=c[1]
for z in d.keys():
    l6.append(z)
proc=(l6[len(l6)-1])
res=len(s)-2*len(proc)
if len(s)<1:
    print("No")
elif res==len(s):
    print("No")
else:
    print("Yes")

