# include<stdio.h>
 
void knapsack(int n, float weight[], float profit[], float capacity) {
   float x[20], tot = 0;
   int i, j, u;
   u = capacity;
 
   for (i = 0; i < n; i++)
      x[i] = 0.0;
 
   for (i = 0; i < n; i++) {
      if (weight[i] > u)
         break;
      else {
         x[i] = 1.0;
         tot = tot + profit[i];
         u = u - weight[i];
      }
   }
 
   if (i < n)
      x[i] = u / weight[i];
 
   tot = tot + (x[i] * profit[i]);
 
   printf("\nprofit: %f", tot);
 
}
 
int main() {
   float weight[25], profit[25], capacity;
   int num, i, j;
   float p[25], temp;
 
   printf("\nEnter the no.of.items: ");
   scanf("%d", &num);
 
   printf("\nEnter weight and profit: \n");
   for (i = 0; i < num; i++) {
      scanf("%f %f", &weight[i], &profit[i]);
   }
 
   printf("\nEnter capacity: ");
   scanf("%f", &capacity);
 
   for (i = 0; i < num; i++) {
      p[i] = profit[i] / weight[i];
   }
 
   for (i = 0; i < num; i++) {
      for (j = i + 1; j < num; j++) {
         if (p[i] < p[j]) {
            temp = p[j];
            p[j] = p[i];
            p[i] = temp;
 
            temp = weight[j];
            weight[j] = weight[i];
            weight[i] = temp;
 
            temp = profit[j];
            profit[j] = profit[i];
            profit[i] = temp;
         }
      }
   }
   knapsack(num, weight, profit, capacity);
   return(0);
}
