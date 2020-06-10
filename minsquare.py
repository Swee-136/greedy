for k in range(int(input())):
    n=int(input())
    l1=[]
    l2=[]
    for i in range(n):
        x,y=list(map(int,input().split()))
        l1.append(x)
        l2.append(y)
    #print(l1)
    #print(l2)
    l1=sorted(l1)
    l2=sorted(l2)
    l=l1[n-1]-l1[0]
    k=l2[n-1]-l2[0]
    z=max(l,k)
    print(z*z)
