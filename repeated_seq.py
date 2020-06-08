s=input()
l1={}
l2=[]
for i in s:
    if i in l1:
        l1[i]+=1
    else:
        l1[i]=1
for k in l1.items():
    if k[1]>1:
        l2.append(k[0])
print("".join(l2))
