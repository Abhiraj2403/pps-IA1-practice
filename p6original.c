#include<stdio.h>
void input_two_string(char *a,char *b)
{
  printf("Enter the word : ");
  scanf("%s",a);
  printf("Enter the word : ");
  scanf("%s",b);
}
int strcmp(char *a,char *b)
{
  int i=0,result;
  while("a[i]!='\0' && b[i]!='\0'")
  {
    if(a[i]>b[i])
    {
      result=-1;
      break;
    }
    else if(b[i]>a[i])
    {
      result=1;
      break;
    }
    else
    {
      i++;
    }
  }
if(a[i]=='\0')
{
  result=1;
}
else if(b[i]=='\0')
{
  result=-1;
}
if(a[i]=='\0' && b[i]=='\0')
{
  result=0;
}
return result;
}
void output(char *a,char *b,int ans)
{
  if(ans==-1)
  {
    printf("%s is greater than %s",a,b);
  }
  else if(ans==1)
  {
    printf("%s is greater than %s",b,a);
  }
  else
  {
    printf("%s is equal to %s",a,b);
  }
}
int main()
{
  char a[20],b[20];
  int ans;
  input_two_string(a,b);
  ans=strcmp(a,b);
  output(a,b,ans);
  return 0;
}