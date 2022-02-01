#include <stdio.h>
void input(int *a,int *b)
{
  printf("enter the value\n");
  scanf("%d",&*a);
  printf("enter the value\n");
  scanf("%d",&*b);
}
void add(int a,int b,int *sum)
{
  *sum=a+b;
}
void output(int a,int b,int sum)
{
  printf("sum of %d + %d is %d",a,b,sum);
}
int main()
{
  int a,b,sum;
  input(&a,&b);
  add(a,b,&sum);
  output(a,b,sum);
  return 0;
}