#include <stdio.h>
int input()
{
  int a;
  printf("enter the value\n");
  scanf("%d",&a);
  return a;
}
int cmp(int a,int b,int c)
{
  if((a>b) && (a>c))
  return a;
  else if((b>a) && (b>c))
  return b;
  else
  return c;
}
void output(int big)
{
  printf("Bigger among three is : %d",big);
}
int main()
{
  int a,b,c,bigger;
  a=input();
  b=input();
  c=input();
  bigger=cmp(a,b,c);
  output(bigger);
  return 0;
}
