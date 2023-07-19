#include<stdio.h>
int main()
{
   int i=1,n,sum=0;
   printf("enter a  positive number");
   scanf("%d",&n);
   while(i<=n)
   {
      printf("%d ",i);
      sum=sum+i;
      i++;
   }
      printf("\nSum is=%d ",sum);
   }
