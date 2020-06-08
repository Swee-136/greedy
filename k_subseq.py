import itertools
n=int(input())
l1=list(map(int,input().split()))
k=int(input())
l2=[]
for i in range(1,n+1):
    for j in itertools.combinations(l1,i):
        l2.append(j)
count=0
for i in l2:
    s=1
    for l in i:
        s=s*l
    if s<=k:
        count+=1
print(count)
