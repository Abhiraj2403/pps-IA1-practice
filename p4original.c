#include <stdio.h>
int input()
{
  int n;
  printf("Enter the value of n\n");
  scanf("%d",&n);
  return n;
}
int aray(int n,int a[10])
{
  int i;
  for(i=0;i<n;i++)
  {
    printf("value of %d is:",i);
    scanf("%d",&a[i]);
  }
}
int add(int n,int a[10])
{
  int i,sum;
  sum=0;
  for(i=0;i<n;i++)
  {
    sum=sum+a[i];
  }
  return sum;
}
void output(int n,int sum,int a[10])
{
 for(int i=0;i<n-1;i++)
 {
   printf("%d + ",a[i]);
 }
 printf("%d is %d",a[n-1],sum);
}
int main()
{
  int n,a[10],sum;
  n=input();
  aray(n,a);
  sum=add(n,a);
  output(n,sum,a);
  return 0;
}