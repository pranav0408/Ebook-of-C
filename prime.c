#include<stdio.h>
int main()
{
  int n,i,ch=0;
  printf("Enter number to check whether it is prime or not\n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    if(n%i==0)
    ch++;
  }
  if(ch==2)
  printf("%d is a Prime Number\n",n);
  else
  printf("%d is not a Prime Number\n",n);
  return 0;
}