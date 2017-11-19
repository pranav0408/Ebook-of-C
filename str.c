#include<stdio.h>
#include<string.h>
int main()
{
  char s1[100], s2[100];
  printf("Enter String 1\n");
  gets(s1);
  printf("Enter String 2\n");
  gets(s2);

  printf("Concatenated String is %s",strcat(s1,s2));
  return 0;
}
