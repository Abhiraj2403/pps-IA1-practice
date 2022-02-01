#include <stdio.h>
int input()
{
  int n;
  printf("enter the value of n \n");
  scanf("%d",&n);
  return n;
}
int aray(int n)
{
  int i, sum;
  sum=0;
  for(i=0;i<=n;++i)
  {
    sum=sum+i;
  }
  return sum;
}
void output(int n,int result)
{
  printf("sum of first %d no. is %d",n,result);
}
int main()
{
  int n,sum;
  n=input();
  sum=aray(n);
  output(n,sum);
  return 0;
}