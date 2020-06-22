from math import sqrt 
n=int(input())
k=int(input())
l1=[]
while n%2==0: 
    l1.append(2)
    n=n/2
x=int(sqrt(n))+1
for i in range(3,x,2):  
    while n%i==0: 
        l1.append(i)
        n=n/i  
if n>2: 
    l1.append(n)
#print(l1)
#print(len(l1))
if len(l1)>k:
    print(l1[k-1])
else:
    print(-1)
