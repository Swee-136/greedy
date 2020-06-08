def knapsack(Weight,w,pro, n):
   if n==0 or Weight==0 :
      return 0
   if (w[n-1]>Weight):
      return knapsack(Weight,w,pro,n-1)
   else:
      return max(pro[n-1] + knapsack(Weight-w[n-1],w,pro,n-1),
         knapsack(Weight,w,pro,n-1))


n=int(input())
w=list(map(int,input().split()))
pro=list(map(int,input().split()))
Weight=int(input())
print(knapsack(Weight,w,pro,n))
