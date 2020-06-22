n=int(input())
k=n 
mi=1
count= 0
while(mi<=n):
    mx=n//k
    count+=k*(mx-mi+1)
    mi=mx+1
    k=n//mi
print(count)
    
