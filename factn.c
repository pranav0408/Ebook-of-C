#include<stdio.h>
int main()
{
  int i,j,n,fact=1;
  printf("Enter limit to find factorial of all numbers upto it\n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=i;j++)
    fact=fact*j;

  printf("Factorial of %d = %d\n",i,fact);
  fact=1;
}
return 0;

}
